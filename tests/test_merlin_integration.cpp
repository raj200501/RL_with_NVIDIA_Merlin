#include "nvidia_merlin_integration.hpp"
#include <cassert>
#include <iostream>

void test_merlin_integration() {
    NVIDIA_Merlin_Integration merlin;
    merlin.load_data("data/synthetic_data.csv");
    std::vector<float> data(10, 1.0f);
    auto processed_data = merlin.process_data(data);
    assert(processed_data.size() == 10);
    std::cout << "NVIDIA Merlin data processing test passed." << std::endl;
}

int main() {
    test_merlin_integration();
    std::cout << "All NVIDIA Merlin integration tests passed." << std::endl;
    return 0;
}
