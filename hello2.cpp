#include <iostream>
using namespace std;

int main() {
    string name;
    cout << "Please enter your name: "<< endl;
    getline(cin,name);
    cout << "Welcome to CSE30," << name << endl;
}