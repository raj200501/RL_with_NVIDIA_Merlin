#include "evaluation.hpp"
#include <iostream>

Evaluation::Evaluation(Agent& agent, Environment& environment) : agent(agent), environment(environment) {}

void Evaluation::evaluate(int episodes) {
    for (int i = 0; i < episodes; ++i) {
        std::vector<float> state = environment.reset();
        while (!environment.is_done()) {
            int action = agent.select_action(state);
            state = environment.step(action);
        }
        std::cout << "Evaluation episode " << i + 1 << " completed." << std::endl;
    }
}
