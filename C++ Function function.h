#ifndef FUNCTIONS_H
#define FUNCTIONS_H

bool isEven(int n){
    return n % 2 == 0;
}

int sumOdd(int arr[],int size){
    int sum = 0;
    for (int i = 0; i < size;i++){
        if(arr[i] % 2 != 0){
            sum += arr[i];
        }
    }

    return sum;

}


    



#endif
