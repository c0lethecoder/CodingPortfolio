#include <iostream>
using namespace std;

int main(){
    int x,v;
    cout << "Enter the size of the Array:";
    cin >> x;
    int num[10];
    int check = 1;
    bool found = false;
    if (x <= 0 ){
        cout << "ERROR: you entered an incorrect value for the array size! " << endl;
        return 0;
    }
    else{
        cout << "Enter the numbers in the array, separated by a space, and press enter: ";
        
        for (int i = 0; i < x; i++){
            cin >> num[i];
        }
        
        cout<< "Enter a number to search for in the array: ";
        cin >> v;
        
        for(int c = 0;c <= x; c++){
            if(v == num[c]){
                cout << "Found value " << v <<" at index "<< c << " which took " << check << " checks." << endl;
                found = true;
                if(c == 0 && check == 1){
                    cout << "We ran into the best case scenario!" << endl;
                    }
                else if (c == x && check == x + 1){
                    cout << "We ran into the worst case scenario!" << endl;
                    }
                break;
            }
            else{
                check++;
                continue;
            }
        }
        if(found == false){
            cout << "The value v was not found in the array!" << endl;
        }

        
    }



}