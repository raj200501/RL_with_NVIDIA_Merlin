#ifndef AGENT_HPP
#define AGENT_HPP

#include <vector>

class Agent {
public:
    Agent(int state_size, int action_size);
    int select_action(const std::vector<float>& state);
    void train(const std::vector<float>& state, int action, float reward, const std::vector<float>& next_state);
private:
    int state_size;
    int action_size;
    std::vector<float> policy;
    void update_policy(const std::vector<float>& state, int action, float reward, const std::vector<float>& next_state);
};

#endif // AGENT_HPP
