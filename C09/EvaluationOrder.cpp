class Forward {
    int i;
public:
    Forward() : i(0) {}
    int f() const { return g() + 1; }
    int g() const { return i; }
};

int main(void) {
    Forward frwd;
    frwd.f();
}