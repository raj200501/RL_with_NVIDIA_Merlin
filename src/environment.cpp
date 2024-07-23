#include "environment.hpp"
#include <random>

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
    if (/* some condition */) {
        done = true;
    }
    return state;
}

bool Environment::is_done() {
    return done;
}

void Environment::update_state(int action) {
    // Logic to update the state based on the action
}
