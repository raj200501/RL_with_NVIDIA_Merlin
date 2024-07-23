#include "environment.hpp"
#include <random>
#include <algorithm>

Environment::Environment(int state_size, int action_size) : state_size(state_size), action_size(action_size), done(false) {
    state.resize(state_size, 0.0f);
}

std::vector<float> Environment::reset() {
    std::fill(state.begin(), state.end(), 0.0f);
    done = false;
    return state;
}

std::vector<float> Environment::step(int action) {
    update_state(action);
    if (std::accumulate(state.begin(), state.end(), 0.0f) > 10.0f) { // Example condition for done
        done = true;
    }
    return state;
}

bool Environment::is_done() {
    return done;
}

void Environment::update_state(int action) {
    std::transform(state.begin(), state.end(), state.begin(), [action](float s) {
        return s + action * 0.1f; // Example logic for state update
    });
}
