#ifndef LINKEDLIST_H
#define LINKEDLIST_H
using namespace std;

struct Node{
int val; 
Node next; 
};
class LinkedList{
public:
LinkedList(); // Constructor
~LinkedList(); // Destructor
void insertAtBack(int valueToInsert);
bool removeFromBack();
void print();
bool isEmpty();
int size();
void clear();
void insertAtFront(int valueToInsert);
bool removeFromFront();
private:
Nodefirst; 
Node *last; 
};
#endif