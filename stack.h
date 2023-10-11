#include "linkedList.h"
#ifndef STACK_H_ 
#define STACK_H_

class stack: public linkedList{
public:
    stack();
    ~stack() ;
    void push(int value);
    int pop();
    int &top();
};
#endif