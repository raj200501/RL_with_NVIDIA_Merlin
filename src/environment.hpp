#ifndef ENVIRONMENT_HPP
#define ENVIRONMENT_HPP

#include <vector>

class Environment {
public:
    Environment(int state_size, int action_size);
    std::vector<float> reset();
    std::vector<float> step(int action);
    bool is_done();
private:
    int state_size;
    int action_size;
    std::vector<float> state;
    bool done;
    void update_state(int action);
};

#endif // ENVIRONMENT_HPP
