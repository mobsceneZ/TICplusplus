class X {
    int i;
public:
    void modify(int ii) { i = ii; }
    X(int ii = 0) : i(ii) {}
};

X f() { return X(); }

void g1(X&) {}
void g2(const X&) {}
void g3(X*) {}

int main() {
    //! g3(&f());
    //! g1(f());
    g2(f());
}