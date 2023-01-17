//In this exercise you are given a main.cpp file that contains a hidden message encoded as a long integer, stored in the variable x. Your task is to write the code that decodes that hidden message and displays it on the terminal when the program is run.

#include <iostream>

using namespace std;

int main(){

    long x = 4919412188601205589;
    unsigned char* c = (unsigned char*) &x;
    //pointer that points to the memory address of the long x

    
    for(int i = 0;i < 8;i++){
        cout << *c;
    c++;
    //as long as the i less than 8 it will keep outputting the value of the long using an unsigned char that reads a single byte.
    }
    for(int i = 0;i < 7;i++){
        c--;
        //reset the loop through the long
    }
    //Was not sure which way it needed to be printed out
    cout << " " << endl;
    
    for(int i = 0;i < 7;i++){
        cout << *c << endl;
    c++;
    }


    //cout << "ptr = " << *ptr << endl;
    //cout << "c = "<<c << endl;


    
    return 0;
}
