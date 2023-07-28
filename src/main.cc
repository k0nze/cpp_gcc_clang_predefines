#include <iostream>

int main(int argc, char** argv) {

    #ifdef __clang__
    std::cout << "clang" << std::endl;
    #else
    std::cout << "gcc" << std::endl;
    #endif

    return 0;
}
