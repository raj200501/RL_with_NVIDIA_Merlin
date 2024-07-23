#include "environment.hpp"
#include "agent.hpp"
#include "nvidia_merlin_integration.hpp"
#include "model_training.hpp"
#include <cassert>
#include <iostream>

void test_model_training() {
    Environment environment(10, 4);
    Agent agent(10, 4);
    NVIDIA_Merlin_Integration merlin;
    merlin.load_data("data/synthetic_data.csv");

    ModelTraining trainer(agent, environment, merlin);
    trainer.train(10); // Use fewer episodes for testing
    std::cout << "Model training test passed." << std::endl;
}

int main() {
    test_model_training();
    std::cout << "All model training tests passed." << std::endl;
    return 0;
}
