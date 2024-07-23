#include "environment.hpp"
#include <cassert>
#include <iostream>

void test_environment() {
    Environment env(10, 4);
    auto state = env.reset();
    assert(state.size() == 10);
    std::cout << "Environment reset test passed." << std::endl;

    state = env.step(1);
    assert(state.size() == 10);
    std::cout << "Environment step test passed." << std::endl;
}

int main() {
    test_environment();
    std::cout << "All environment tests passed." << std::endl;
    return 0;
}
