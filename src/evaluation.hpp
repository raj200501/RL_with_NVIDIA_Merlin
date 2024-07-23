#ifndef EVALUATION_HPP
#define EVALUATION_HPP

#include "agent.hpp"
#include "environment.hpp"

class Evaluation {
public:
    Evaluation(Agent& agent, Environment& environment);
    void evaluate(int episodes);
private:
    Agent& agent;
    Environment& environment;
};

#endif // EVALUATION_HPP
