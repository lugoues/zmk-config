# FROM ghcr.io/xtruder/nix-devcontainer:v1

FROM docker.io/zmkfirmware/zmk-dev-arm:3.5


RUN \
  DEBIAN_FRONTEND=noninteractive  \
  apt update \
  && apt install -y \
    subversion \
    wget \
    gawk \
    git \
    neovim \
    zsh \
    unzip
