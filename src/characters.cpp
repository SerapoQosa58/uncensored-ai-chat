// characters.cpp — part of uncensored-ai-chat.

#include "uncensoredaichat/characters.h"

#include <cstdio>

namespace uncensoredaichat {

Characters::Characters(const std::string& config_path)
    : config_path_(config_path) {}

void Characters::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Characters::run() {
    if (verbose_) std::fprintf(stderr, "[uncensored-ai-chat] characters: run\n");
    // core logic lives here
    return true;
}

}  // namespace uncensoredaichat
