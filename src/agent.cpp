#include "agent.hpp"
#include <random>

Agent::Agent(int state_size, int action_size) : state_size(state_size), action_size(action_size) {
    policy.resize(state_size * action_size, 1.0f); // Initialize policy with dummy values
}

int Agent::select_action(const std::vector<float>& state) {
    // Randomly select an action
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, action_size - 1);
    return dis(gen);
}

void Agent::train(const std::vector<float>& state, int action, float reward, const std::vector<float>& next_state) {
    update_policy(state, action, reward, next_state);
}

void Agent::update_policy(const std::vector<float>& state, int action, float reward, const std::vector<float>& next_state) {
    // Simple policy update logic
    int index = action * state_size + std::distance(state.begin(), std::max_element(state.begin(), state.end()));
    policy[index] += reward;
}
