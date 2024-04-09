int d = 1;
const int e = 2;
int* u = &d;
int* w = (int*)&e; // Legal but bad practice
int main() {}