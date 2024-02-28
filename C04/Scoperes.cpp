int a;
void f() {}

struct S {
    int a;
    void f();
};

void S::f() {
    ::f();
    ::a++;
    a--;
}

int main() { S s; f(); }