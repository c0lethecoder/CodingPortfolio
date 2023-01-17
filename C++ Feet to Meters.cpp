//Write a C++ program that takes in a value representing a distance in feet, and it outputs the corresponding distance in meters. 
//For reference: 1 meter = 3.28084 feet.


#include <iostream>

using namespace std;

int main(){
    
    float m, f;

    cin >> f;

    m = f / 3.28084;

    cout << m << endl;

    return 0;
}
