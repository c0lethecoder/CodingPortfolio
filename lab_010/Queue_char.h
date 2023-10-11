#ifndef QUEUE_CHAR_H
#define QUEUE_CHAR_H

struct node {
    char info;
    struct node next;
};

class Queue {
private:
    noderear;
    node *frnt;

public:
    Queue();
    void enqueue(char value);
    char dequeue();
    void display();
    int size();
    bool isEmpty();
    char front();
};
#endif