#include <iostream>
using namespace std;

int main (){
    int arr[100], size;
    bool incr = true;
    cout << "Enter the size of the Array: ";
    cin >> size;
    
    if (size > 0){
        cout << "Enter the number in the array, seperated by a space, then press enter: ";
        for (int i = 0; i < size ; i++){
            cin >> arr[i];
        }

        for (int c = 0; c < size; c++ ){
            if(arr[c - 1] > arr[c]){
                incr = false;
                break;
            }
            else if (arr[c-1] == arr[c]){   
                incr = false;
                break;
            }
            else{
                incr = true;
                continue;
            }

        }
        if (incr == true){
            cout << "This IS an Increasing Array!" << endl;
        }
        else{
            cout << "This is NOT an Increasing Array!" << endl;
        }
        
    }
    else{
        cout << "ERROR: You entered an incorrect value for the array size!" << endl;

    }
    for (int j = 0; j < size ; j++){
        cout << arr[j] << " ";
    }


    return 0;

}