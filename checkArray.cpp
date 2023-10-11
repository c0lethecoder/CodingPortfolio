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




int main(){
    string line;
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
        cout << "The array is sorted in ascending order!";
    }
    else if(c == -1){
        cout << "The array is sorted in descending order!";
    }
    else if(c == 0){
       cout <<  "The array is not sorted.";
    }
    else{
        cout << "Something went wrong";
    }

     delete[] arr;
}

        


    

