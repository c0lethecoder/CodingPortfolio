#ifndef STACK_char_H 
#define STACK_char_H

#include "linkedList_char.h" 
using namespace std;

class stack_char : public linkedList_char
{
    public:
        stack_char ();  
        ~stack_char (); 
        void push (char value);
        char pop() ;
        char& top();

};
#endif