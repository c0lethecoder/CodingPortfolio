//In this exercise we are extending the IntArray data structure we have been developing. There is some code in main.cpp and your task is to make it so that it compiles and runs.
//You should not modify main.cpp in any way. It includes a file called IntArray.h, so your entire solution should be in that file (IntArray.h).

#include <iostream>
#include "IntArray.h"

using namespace std;


int main(){
    
    IntArray A;
    A.append(1);
    A.append(2);

    IntArray B;
    B.append(3);
    B.append(4);

    IntArray C = A + B;

    cout << C << endl;

    return 0;
}
