#include <iostream>
using namespace std;


void combineStr(string x, int y){
    for (int i = 0;i < y; i++){
        cout << x;
    }
}

int main(){
    bool l = true;
    int y;
    string x;
    for(int c = 3; c > 0; c++){

        cout << "Enter a string: ";
        cin >> x;

        cout << "Enter a number of times: ";
        cin >> y;


        if(y == 0){
            break;
        }
        else{
            cout << "The resulting string is: ";
            combineStr(x,y);
            cout << endl;
            continue;
        }
    }




}

