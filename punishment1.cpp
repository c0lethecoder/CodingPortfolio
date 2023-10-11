#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter the number of lines for the punishment:" << endl;
    cin >> a;
    if (a <= 0){
        cout << "You entered an incorrect value for the number of lines!"<<endl;
    }
    else{
        for (int i = 1; i <= a; i++){
         cout <<"I will always use object oriented programming. " ;
    }

    }
    return 0;
}