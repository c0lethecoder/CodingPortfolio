#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    cout << "Enter the number of lines for the punishment:" << endl;
    cin >> a;
    cout << "Enter the line for which we want to make a typo:"<< endl;
    cin >> b;
    if (a <= 0 || b <= 0){
        cout << "You entered an incorrect value for the number of lines!" << endl;
    }
    else{
        for (int i = 1; i <= a; i++){
            if (i == b){
            cout <<"I will always use object oriented programing. ";
            }
            else{
            cout <<"I will always use object oriented programming. ";
            }
         
    }

    }
    return 0;
}