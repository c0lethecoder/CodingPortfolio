#include <iostream>
#include "Queue.h"

using namespace std;

int main(){

    Queue queue;
    queue.enqueue(45);
    queue.enqueue(23);
    queue.enqueue(12);
    cout<<"element dequeued is "<<queue.dequeue()<<endl;
    cout<<"element dequeued is "<<queue.dequeue()<<endl;
    cout<<"elements left in the queue is"<<endl;
    queue.display();

    return 0;

}