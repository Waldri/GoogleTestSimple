#include <iostream>
#include "LibraryCode.hpp"

int main(int argc, char **argv){
    int s = sum(2, 3);
    std::cout << "Actual app\n";
    std::cout << "sum = " << s << '\n';

    return 0;
}