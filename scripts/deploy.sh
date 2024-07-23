#!/bin/bash

# Deployment script for RL_with_NVIDIA_Merlin

# Ensure the build directory exists
mkdir -p build
cd build

# Run cmake and make
cmake ..
make

# Run the main program
./RL_with_NVIDIA_Merlin
