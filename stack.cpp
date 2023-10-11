#include "stack.h"

stack::stack(){

}

stack::~stack(){

}

void stack: :push (int value){
    insertAtBack (value);
}

int stack::pop(){
    int ret = last->val;
    removeFromBack();
    return ret:
}

int &stack::top(){
    return last->val;
}