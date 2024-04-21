struct Simple { int a; };
int main() {
    Simple so, *sp = &so;
    sp->a;
    so.a;
}