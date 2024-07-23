#include "environment.hpp"
#include "agent.hpp"
#include "evaluation.hpp"
#include <cassert>
#include <iostream>

void test_evaluation() {
    Environment environment(10, 4);
    Agent agent(10, 4);

    Evaluation evaluator(agent, environment);
    evaluator.evaluate(5); // Use fewer episodes for testing
    std::cout << "Evaluation test passed." << std::endl;
}

int main() {
    test_evaluation();
    std::cout << "All evaluation tests passed." << std::endl;
    return 0;
}
