// main.cpp — entry point. Wires config and subsystems together.

#include "uncensoredaichat/settings.h"
#include "uncensoredaichat/server.h"
#include "uncensoredaichat/models.h"
#include "uncensoredaichat/characters.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    uncensoredaichat::Settings settings = uncensoredaichat::Settings::load_default();
    uncensoredaichat::Server server(settings.store_path);
    uncensoredaichat::Models models(settings.store_path);
    uncensoredaichat::Characters characters(settings.store_path);
    std::fprintf(stderr, "[uncensored-ai-chat] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
