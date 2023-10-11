
#include "stack.h"
#include "linkedList.h"
#include <iostream>

using namespace std;

int main(){
    stack s;
    for(int i = 0; i < 10; ++i){
        s.push(i);
    }
    cout << "Top element is " << s.top() << endl;
    cout << "Size: " << s.size() << endl;
    cout << "Popping " << s.pop() << endl;
    cout << "Size: " << s.size() << endl;
    cout << "Top element is " << s.top() << endl;
    return 0;
}