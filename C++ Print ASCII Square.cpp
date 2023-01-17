//The program should then print a square/rectangle of the given width and height.
//The program should ask the user to input two integers: the width, and the height.
//The program should then print a square/rectangle of the given width and height.

#include <iostream>

using namespace std;

int main(){
    int w, h;
    cin >> w >> h;

    for(int i=0;i<h;i++)
        for(int k=0;k<w;k++)
            if (k == w-1){
                cout<<"*"<<endl;
            }
            else if (k==0 || i==0 || i==h-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        cout << endl;


    return 0;
}
