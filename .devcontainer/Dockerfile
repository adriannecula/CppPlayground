
# Use a minimal Ubuntu base
FROM ubuntu:24.04

# Avoid interactive prompts during package installation
ENV DEBIAN_FRONTEND=noninteractive

# Install essential build tools
RUN apt-get update && apt-get install -y \
    build-essential \
    cmake \
    ninja-build \
    gdb \
    git \
    curl \
    wget \
    unzip \
    pkg-config \
    && apt-get clean && rm -rf /var/lib/apt/lists/*

ARG USERNAME=developer
ARG USER_UID=500
ARG USER_GID=$USER_UID

RUN groupadd --gid $USER_GID $USERNAME \
    && useradd --uid $USER_UID --gid $USER_GID -m $USERNAME \
    && apt-get update && apt-get install -y sudo \
    && echo "$USERNAME ALL=(ALL) NOPASSWD:ALL" >> /etc/sudoers.d/$USERNAME \
    && chmod 0440 /etc/sudoers.d/$USERNAME
    
# Switch to non-root user by default
USER $USERNAME   

# Set working directory
WORKDIR /workspace