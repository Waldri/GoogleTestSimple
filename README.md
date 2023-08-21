# GoogleTestLinux

## install cmake
sudo apt install cmake

## Download and intall google test from gitHub
git clone https://github.com/google/googletest.git 
cd googletest
sudo cmake CMakelist.txt
sudo make

## Install libraries (*.a)
cd lib/
sudo cp * /usr/lib
cd googlemock
sudo cp * /usr/include -rf
cd googletest
sudo cp * /usr/include -rf

#Run the test