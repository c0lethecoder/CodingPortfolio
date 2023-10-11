#ifndef LINKEDLIST_char_H
#define LINKEDLIST_char_H

using namespace std;


struct Node{
        char val;
        Node *next;
}

class linkedList_char
{
    public:
        linkedList_char();
        ~linkedList_char(); 
        froid insertAtack(char valuetolnsert);
        bool removeFromBack () ;
        void print ();
        bool isEmpty;
        int size();
        void clear() ;

        void insertAtFront (char valueToInsert):
        bool removeFromFront () ;


    protected:
        Node *first;
        Node *last;

};
#endif