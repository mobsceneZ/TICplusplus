class Orange {};
class Pear {};

class Apple {
public:
    operator Orange() const;
    operator Pear() const;
};

void eat(Orange);
void eat(Pear);

int main() {
    Apple c;
    //! eat(c);
}