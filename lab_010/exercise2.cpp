#include <iostream>
#include "Queue_char.h"
using namespace std;

int main() {

    cout << "Function call\t\tOutput\t\t\tFront  Queue  Rear\n";
    cout << "------------------------------------------------------------------\n";

    Queue queue;

    cout << "dequeue()\t\t";
    char c = queue.dequeue();
    cout << "\t" << c << "\n";

    cout << "enqueue(D)\t\t\t\t";
    queue.enqueue('D');
    cout << "\t";
    queue.display();

    cout << "enqueue(A)\t\t\t\t";
    queue.enqueue('A');
    cout << "\t";
    queue.display();

    cout << "dequeue()\t\t";
    c = queue.dequeue();
    cout << c << "\t\t\t";
    queue.display();

    cout << "size()\t\t";
    int s = queue.size();
    cout << "\t" << s << "\t\t\t";
    queue.display();

    cout << "enqueue(D)\t\t\t\t";
    queue.enqueue('D');
    cout << "\t";
    queue.display();

    cout << "isEmpty()\t\t";
    if (queue.isEmpty())
        cout << "true";
    else
        cout << "false";
    cout << "\t\t\t";
    queue.display();

    cout << "front()\t\t";
    c = queue.front();
    cout << "\t" << c << "\t\t\t";
    queue.display();

    cout << "enqueue(T)\t\t\t\t";
    queue.enqueue('T');
    cout << "\t";
    queue.display();

    cout << "front()\t\t";
    c = queue.front();
    cout << "\t" << c << "\t\t\t";
    queue.display();

    return 0;
}