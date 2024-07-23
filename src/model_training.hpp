#ifndef MODEL_TRAINING_HPP
#define MODEL_TRAINING_HPP

#include "agent.hpp"
#include "environment.hpp"
#include "nvidia_merlin_integration.hpp"

class ModelTraining {
public:
    ModelTraining(Agent& agent, Environment& environment, NVIDIA_Merlin_Integration& merlin);
    void train(int episodes);
private:
    Agent& agent;
    Environment& environment;
    NVIDIA_Merlin_Integration& merlin;
};

#endif // MODEL_TRAINING_HPP
