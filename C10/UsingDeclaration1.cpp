#include "UsingDeclaration.h"
void h() {
    using namespace U;
    using V::f;
    f();
    U::f();
}
int main() {}