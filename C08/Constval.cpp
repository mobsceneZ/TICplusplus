int f3() { return 1; }
const int f4() { int i = 1; return i; }

int main() {
    const int j = f3();
    int k = f4();
}
