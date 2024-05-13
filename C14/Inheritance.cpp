#include "Useful.h"
#include <iostream>
using namespace std;

class Y : public X {
    int i;
public:
    Y() { i = 0; }
    int change() {
        i = permute();
        return i;
    }
    void set(int ii) {
        i = ii;
        X::set(ii);
    }
};

int main() {
    cout << "sizeof(X) = " << sizeof(X) << endl;
    cout << "sizeof(Y) = " << sizeof(Y) << endl;
    Y D;
    D.change();
    D.read();
    D.permute();
    D.set(12);
}