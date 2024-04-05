#ifndef STASH3_H
#define STASH3_H

class Stash {
    int size;
    int quantity;
    int next;
    unsigned char* storage;
    void inflate(int increase);
public:
    Stash(int size, int initQuantity = 0);
    ~Stash();
    int add(void* element);
    void* fetch(int index);
    int count();
};

#endif