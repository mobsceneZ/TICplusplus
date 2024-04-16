#ifndef INITIALIZER_H
#define INITIALIZER_H
#include <iostream>
extern int x;
extern int y;

class Initializer {
    static int initCount;
public:
    Initializer() {
        std::cout << "Initializer()" << std::endl;
        if (initCount++ == 0) {
            std::cout << "performing initialization"
                      << std::endl;
            x = 100;
            y = 200;
        }
    }
    ~Initializer() {
        std::cout << "~Initializer()" << std::endl;
        if (--initCount == 0) {
            std::cout << "performing cleanup"
                      << std::endl;
            // Any necessary cleanup here
        }
    }
};

static Initializer init;
#endif