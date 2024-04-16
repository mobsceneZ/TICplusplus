#include <iostream>
using namespace std;

class Outer {
    class Inner {
        static int i;
    };
};

int Outer::Inner::i = 47;

void f() {
    class Local {
    public:
        //! static int i;
    };
}

int main() { Outer x; f(); }