class X {
public:
    X();
};

X::X() {}

void f(int i) {
    if (i < 10) {

    } 
    X x1;
jump1:
    switch(i) {
        case 1:
            X x2;
            break;
        
            X x3;
            break;
    }
}

int main() {
    f(9);
    f(11);
}