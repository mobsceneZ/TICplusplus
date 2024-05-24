#include <iostream>
#include <typeinfo>
using namespace std;

class Shape { public: virtual ~Shape() {} };
class Circle : public Shape {};
class Square : public Shape {};
class Other {};

int main() {
    Circle c;
    Shape* s = &c;
    s = static_cast<Shape*>(&c);
    Circle* cp = 0;
    Square* sp = 0;
    if (typeid(s) == typeid(cp))
        cp = static_cast<Circle*>(s);
    if (typeid(s) == typeid(sp))
        sp = static_cast<Square*>(s);
    if (cp != 0)
        cout << "It's a circle!" << endl;
    if (sp != 0)
        cout << "It's a square!" << endl;
    //! Other* op1 = static_cast<Other*>(s);
    Other* op2 = (Other*)s;
}