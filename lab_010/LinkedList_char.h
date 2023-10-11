#ifndef LINKEDLIST_char_H 
#define LINKEDLIST_char_H

using namespace std; 


struct Node 
{
    char val; 
    Node next; 
};

class LinkedList_char 
{

    public:

        LinkedList_char(); // Constructor
        ~LinkedList_char(); // Destructor
        void insertAtBack(char valueToInsert);
        bool removeFromBack();
        void print();
        bool isEmpty();
        int size();
        void clear();


        void insertAtFront(char valueToInsert);
        bool removeFromFront();


    protected:
        Nodefirst; 
        Node *last; 
};

#endif