#include <iostream>
using namespace std;

int main(){
    int x;
    cout << "Enter the size of a 2d Array:"<< endl;
    cin >> x;

    if (x <= 0 || x > 10){
        cout << "ERROR: you entered an incorrect value for the array size! " << endl;
        return 0;
    }
    
    int nums[10][10];
    int neg = 0;

    for (int i = 0; i < x;i++){
        cout << "Enter values in the array for row " << i + 1 << ", seperated by a space, and presss enter.";

        for (int c = 0; c < x; c++){
            cin >> nums[i][c];

            if (nums[i][c] < 0){
                neg++;
            }
        }
    } 

    if(neg == 0){
        cout << "All values are non-negative!" << endl;
    }
    else{
        cout << "There are " << neg << " negative values.";
    }



    return 0;

}