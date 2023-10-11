#ifndef QUEUE_H
#define QUEUE_H

using namespace std;

struct node{

int num;

struct node next;

};

class Queue{

private:

noderear;

node *front;

public:

Queue();

void enqueue(int value);

int dequeue();

void display();

};
#endif
