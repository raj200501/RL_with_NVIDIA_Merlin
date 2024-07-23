#include "environment.hpp"
#include "agent.hpp"
#include "nvidia_merlin_integration.hpp"
#include "model_training.hpp"
#include "evaluation.hpp"
#include <iostream>

int main() {
    // Initialize environment, agent, and NVIDIA Merlin integration
    Environment environment(10, 4);
    Agent agent(10, 4);
    NVIDIA_Merlin_Integration merlin;
    
    // Load data using NVIDIA Merlin
    merlin.load_data("data/synthetic_data.csv");

    // Train the model
    ModelTraining trainer(agent, environment, merlin);
    trainer.train(100);

    // Evaluate the model
    Evaluation evaluator(agent, environment);
    evaluator.evaluate(10);

    std::cout << "Reinforcement Learning with NVIDIA Merlin completed successfully." << std::endl;
    return 0;
}
