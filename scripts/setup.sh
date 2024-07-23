#!/bin/bash

# Setup script for RL_with_NVIDIA_Merlin

# Install necessary dependencies
sudo apt-get update
sudo apt-get install -y build-essential cmake

# Clone the repository
git clone https://github.com/yourusername/RL_with_NVIDIA_Merlin.git
cd RL_with_NVIDIA_Merlin

# Run the deploy script
./scripts/deploy.sh
