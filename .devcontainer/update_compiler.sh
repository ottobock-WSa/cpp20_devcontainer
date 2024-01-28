#/bin/bash

echo "##cf## Installing ppa repository to access g++/gcc 11 on Ubuntu 20.04"
sudo add-apt-repository ppa:ubuntu-toolchain-r/test -y

echo "##cf## Installing g++/gcc 11"
sudo apt install -y g++-11

echo "##cf## Updating alternatives to set g++/gcc 11 as default"
sudo update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-11 1
sudo update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-11 1