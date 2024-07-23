#include "model_training.hpp"
#include <iostream>

ModelTraining::ModelTraining(Agent& agent, Environment& environment, NVIDIA_Merlin_Integration& merlin)
    : agent(agent), environment(environment), merlin(merlin) {}

void ModelTraining::train(int episodes) {
    for (int i = 0; i < episodes; ++i) {
        std::vector<float> state = environment.reset();
        while (!environment.is_done()) {
            int action = agent.select_action(state);
            std::vector<float> next_state = environment.step(action);
            float reward = 1.0f; // Example reward
            agent.train(state, action, reward, next_state);
            state = next_state;
        }
        std::cout << "Episode " << i + 1 << " completed." << std::endl;
    }
}
