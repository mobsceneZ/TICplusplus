#include <iostream>
using namespace std;

class One {
public:
    One() {}
};

class Two {
public:
    Two(const One&) { cout << "automatic type conversion called" << endl; }
};

void f(Two) {}

int main() {
    One one;
    f(one);
}