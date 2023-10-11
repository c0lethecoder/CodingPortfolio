#include <iostream>
using namespace std;

void sortArr (int order, int x,int num[]){
    int j, saved;
    if(order == 0){
        //ascending
        for(int i = 0; i < x; i++){
            saved = num[i];
            j = i;
            while (j > 0 && num[j - 1] > saved){
                num[j] = num[j-1];
                j = j - 1 ;
            }
            num[j] = saved;
            }
    cout << "This is the sorted array in ascending order :"; 
    for (int p = 0; p < x ; p++){
            cout << num[p] << " ";
    }
    }  
    else if(order == 1){
        //descending
        for(int i = 0; i < x; i++){
            saved = num[i];
            j = i;
            while (j > 0 && num[j - 1] < saved){
                num[j] = num[j-1];
                j = j - 1 ;
            }
            num[j] = saved;
            }

        cout << "This is the sorted array in descending order :";
        for (int p = 0; p < x ; p++){
            cout << num[p] << " ";
    }
    } 

}

int main(){
    int x,v,i,j,order;
    cout << "Enter the size of the Array:";
    cin >> x;
    int num[10];
    if (x <= 0 ){
        cout << "ERROR: you entered an incorrect value for the array size! " << endl;
        return 0;
    }
    else{
        cout << "Enter the numbers in the array, separated by a space, and press enter: ";
        
        for (int c = 0; c < x; c++){
            cin >> num[c];
        }

        cout << "Sort in ascending (0) or descending (1) order? ";
        cin >> order;

        sortArr(order,x,num);






    }


}
