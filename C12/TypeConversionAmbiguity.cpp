class Orange;

class Apple {
public:
    operator Orange() const;
};

class Orange {
    Orange(Apple);
};

void f(Orange) {}

int main() {
    Apple a;
    //! f(a);
}