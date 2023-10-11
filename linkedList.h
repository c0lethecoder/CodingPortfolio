#ifndef LINKEDLIST_H 
#define LINKEDLIST_H

using namespace std;

struct Node
{
    int val;
    Node *next;
};

class linkedList
{
    public:
        linkedList ();
        ~linkedList ();
        void insertAtBack(int valueToInsert);
        bool removeFromBack();
        void print();
        bool isEmpty();
        int size();
        void clear();
protected:
    Node *first;
    Node *last;
};

#endif