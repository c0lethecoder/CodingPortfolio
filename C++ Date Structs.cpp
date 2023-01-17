//In this exercise you are given a C++ program that makes use of variables of type Date. The definition of the Date data structure (struct) should be in the file Date.h but it has somehow disappeared. Please provide it for us so that the program in main.cpp compiles and runs correctly.
//The output of the program should be exactly:
// 01/01/1970
// 11/11/1918
// 07/04/2022


#include <iostream>
#include "Date.h"

using namespace std;

int main(){

    Date* dates = new Date[3];

    dates[0] = Date();
    dates[1] = Date(11,11,1918);
    dates[2] = Date(7,4,2022);
    
    for (int i = 0; i < 3; i++){
        cout << dates[i] << endl;
    }

    delete[] dates;

    return 0;
}
