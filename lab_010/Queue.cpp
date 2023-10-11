#include <iostream>
#include "Queue.h"

using namespace std;

Queue::Queue(){
    rear = NULL;
    front = NULL;
}

void Queue::enqueue(int value){
    node temp = new node;
    temp->num = value;
    temp->next = NULL;
    if(front == NULL){
        front = temp;
    }else{
        rear->next = temp;
    }
    rear = temp;
}

int Queue::dequeue(){
    nodetemp = new node;
    if(front == NULL){
        cout<<"\nQueue is Emtpty\n";
    }else{
        temp = front;
        front = front->next;
        int value = temp->num;
        delete temp;
        return value;
    }
    return -1;
}

void Queue::display(){
    node *p = new node;
    p = front;
    if(front == NULL){
        cout<<"\nNothing to Display\n";
    }else{
        while(p!=NULL){
            cout<<endl<<p->num;
            p = p->next;
        }
    }
}