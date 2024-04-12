#ifndef STACK4_H
#define STACK4_H
#include <cassert>

class Stack {
    struct Link {
        void* data;
        Link* next;
        Link(void* dat, Link* nxt) :
            data(dat), next(nxt) {}
    }* head;
public:
    Stack() : head(0) {}
    ~Stack() { assert(head == 0); }
    void push(void* dat) {
        head = new Link(dat, head);
    }
    void* peek() const {
        return head ? head->data : 0;
    }
    void* pop() {
        if (head == 0) return 0;
        void* result = head->data;
        Link* oldHead = head;
        head = head->next;
        delete oldHead;
        return result;
    }
};

#endif