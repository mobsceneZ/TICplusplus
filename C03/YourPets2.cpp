#include <iostream>
using namespace std;

int dog, cat, bird, fish;

void f(int pet) {
    cout << "pet id number: " << pet << endl;
}

int main() {
    int i, j, k;
    cout << "f(): " << (void*)&f << endl;
    cout << "dog: " << &dog << endl;
    cout << "cat: " << &cat << endl;
    cout << "bird: " << &bird << endl;
    cout << "fish: " << &fish << endl;
    cout << "i: " << &i << endl;
    cout << "j: " << &j << endl;
    cout << "k: " << &k << endl;
}