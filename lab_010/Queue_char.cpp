#include <iostream>
#include "Queue_char.h"
using namespace std;

Queue::Queue() {
    rear = NULL;
    frnt = NULL;
}

int Queue::size() {
    node p = new node;
    p = frnt;
    int sz = 0;
    while (p != NULL) {
        sz++;
        p = p->next;
    }
    return sz;
}

bool Queue::isEmpty() {
    if (frnt == NULL)
        return true;
    return false;
}

char Queue::front() {
    if (frnt == NULL)
        return ' ';
    return frnt->info;
}

void Queue::enqueue(char value) {
    nodetemp = new node;
    temp->info = value;
    temp->next = NULL;
    if (frnt == NULL) {
        frnt = temp;
    }
    else {
        rear->next = temp;
    }
    rear = temp;
}

char Queue::dequeue() {
    node temp = new node;
    if (frnt == NULL) {
        cout << "exception";
        return ' ';
    }
    else {
        temp = frnt;
        frnt = frnt->next;
        return temp->info;
        delete temp;
    }
}

void Queue::display() {
    nodep = new node;
    p = frnt;
    if (frnt == NULL) {
        return;
    }
    else {
        while (p ->next != NULL) {
            cout << p->info << ", ";
            p = p->next;
        }
        cout << p->info << "\n";
    }
}