#include <iostream>
#include "./lib/hello.cpp"

int main(int argc,char **argv) {
    std::string world;
    if (argc > 1) {
        world = argv[1];
    }
    std::cout <<  hello(world) << std::endl;
    return 0;
}