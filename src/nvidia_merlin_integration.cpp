#include "nvidia_merlin_integration.hpp"
#include <iostream>
#include <fstream>
#include <sstream>

NVIDIA_Merlin_Integration::NVIDIA_Merlin_Integration() {
    // Initialization code if needed
}

void NVIDIA_Merlin_Integration::load_data(const std::string& file_path) {
    load_csv(file_path);
}

std::vector<float> NVIDIA_Merlin_Integration::process_data(const std::vector<float>& data) {
    // Example processing logic with NVIDIA Merlin
    std::vector<float> processed_data(data.size(), 0.0f);
    std::transform(data.begin(), data.end(), processed_data.begin(), [](float d) {
        return d * 1.5f; // Dummy processing
    });
    return processed_data;
}

void NVIDIA_Merlin_Integration::load_csv(const std::string& file_path) {
    std::ifstream file(file_path);
    if (!file.is_open()) {
        std::cerr << "Failed to open file: " << file_path << std::endl;
        return;
    }

    std::string line;
    while (std::getline(file, line)) {
        std::vector<float> row;
        std::stringstream ss(line);
        std::string value;
        while (std::getline(ss, value, ',')) {
            row.push_back(std::stof(value));
        }
        dataset.push_back(row);
    }

    file.close();
}
