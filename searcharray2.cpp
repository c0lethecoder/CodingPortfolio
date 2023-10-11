#include <iostream> 
#include <fstream> 
#include <string>
using namespace std; 

int checkArraySort(string* A, int array_size){
    bool a = false;
    bool d = false;
    int i = 0;
    int r = -1;
    
    if(A[i] < A[i+1]){
        //ascending
        for(i = 0;i < array_size - 1; i++){
            if(A[i] < A[i+1]){
                a = true;
            } 
            else{
                return 0;                
            }

        }
        return 1;
    }
    else if(A[i] > A[i+1]){
        //descending
        for(i = 0;i < array_size - 1; i++){
            if(A[i] > A[i+1]){
                d = true;
            } 
            else{
                return 0;
            } 
        }
        return -1;
    }
    else {
        return 0;
    }
}


int binarySearchL(string* A, int array_size, string key){
    int low = 0;
    int high = array_size - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (A[mid] == key) {
    // Key found at middle index
            return mid;
        } 
        else if (A[mid] > key) {
        // Key is in the lower half of the array
            high = mid - 1;
            } 
        else {
        // Key is in the upper half of the array
            low = mid + 1;
}
}
        return -1;
}


int main(){
    string line,k;
    int r = -1;
     ifstream myfile("words_in.txt");
     int count = 0;

     while(getline(myfile, line)){
          count++;
     }
     myfile.close();
     
     string * arr;
     arr = new string[count];
     int i = 0;

     myfile.open("words_in.txt");
     while(getline(myfile, line)){
          arr[i] = line;
          i++;
     }
     myfile.close();

     ofstream outfile("words_out.txt");
     for(i = 0; i < count; i++){
          outfile << arr[i] << endl;
     }
     outfile.close();

    int c = checkArraySort(arr,count);

    if(c == 1){
        cout << "The array is sorted in ascending order!" << endl;

    }
    else if(c == -1){
        cout << "The array is sorted in descending order!"<< endl;

    }
    else if(c == 0){
       cout <<  "The array is not sorted.";
    }
    else{
        cout << "Something went wrong";
    }

    cout<< "Input Search Key: ";
    cin >> k;

   int result = binarySearchL(arr,count,k);

    if (result == -1){
        cout << "The key " << k << " was not found in the array!" << endl;
    }
    else {
        cout << "Found key " << k << " at index " << result << "!" << endl;
    }

     delete[] arr;


}