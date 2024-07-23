#ifndef NVIDIA_MERLIN_INTEGRATION_HPP
#define NVIDIA_MERLIN_INTEGRATION_HPP

#include <vector>
#include <string>

class NVIDIA_Merlin_Integration {
public:
    NVIDIA_Merlin_Integration();
    void load_data(const std::string& file_path);
    std::vector<float> process_data(const std::vector<float>& data);
private:
    std::vector<std::vector<float>> dataset;
    void load_csv(const std::string& file_path);
};

#endif // NVIDIA_MERLIN_INTEGRATION_HPP
