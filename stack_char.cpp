#include "stack_char.h" 
#include <iostream>
using namespace std;

stack_char::stack_char(){}
stack_char::~stack_char(){}
void stack_char: push (char value) {
    insertAtFront(value);
}
char stack_char::pop(){
    char x = first->val;
    removeFromFront();
    return x;
}
char& stack_char:: top(){
    return first->val;
}