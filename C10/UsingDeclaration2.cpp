#include "UsingDeclaration.h"
namespace Q {
    using U::f;
    using V::g;
}
void m() {
    using namespace Q;
    f();
    g();
}
int main() {}