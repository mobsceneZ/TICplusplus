enum note { middleC, Csharp, Cflat };

class Instrument {
public:
    void play(note) const {}
};

class Wind : public Instrument {};

void tune(Instrument& i) {
    // ...
    i.play(middleC);
}

int main() {
    Wind flute;
    tune(flute);
}