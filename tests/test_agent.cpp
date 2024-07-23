#include "agent.hpp"
#include <cassert>
#include <iostream>

void test_agent() {
    Agent agent(10, 4);
    std::vector<float> state(10, 1.0f);
    int action = agent.select_action(state);
    assert(action >= 0 && action < 4);
    std::cout << "Agent select action test passed." << std::endl;

    std::vector<float> next_state(10, 0.5f);
    agent.train(state, action, 1.0f, next_state);
    std::cout << "Agent training test passed." << std::endl;
}

int main() {
    test_agent();
    std::cout << "All agent tests passed." << std::endl;
    return 0;
}
