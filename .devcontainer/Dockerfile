
# Use a minimal Ubuntu base
FROM ubuntu:24.04

# Avoid interactive prompts during package installation
ENV DEBIAN_FRONTEND=noninteractive

ARG USERNAME=ubuntu



# Install essential build tools
RUN apt-get update && apt-get install -y \
    build-essential \
    clang \
    cmake \
    ninja-build \
    gdb \
    git \
    curl \
    wget \
    unzip \
    pkg-config \
    && apt-get clean && rm -rf /var/lib/apt/lists/*
 
  

 # Switch to non-root user by default
USER $USERNAME 

# Set working directory
WORKDIR $WORKSPACE
