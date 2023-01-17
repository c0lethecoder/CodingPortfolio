//In this task we are given a simple struct and our task is to make sure it can be copied properly. We must define a copy constructor as well as an overloaded assignment operator.

#include <iostream>
#include "Box.h"

using namespace std;


int main(){

    Box original(12);

    original.put(0,101);
    original.put(1,111);
    original.put(2,121);

    Box copy = original;

    original.contents[0] = 999;

    for (int i = 0; i < 5; i++){
        cout << original.contents[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 5; i++){
        cout << copy.contents[i] << " ";
    }
    cout << endl;

    return 0;
}
