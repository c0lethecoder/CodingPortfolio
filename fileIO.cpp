#include <iostream> // include header for I/O
#include <fstream> // include file read+write stream class
#include <string> // include string type from STL library
#include <assert.h>
using namespace std; // use std library


int main()  {
     string line;
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

     delete[] arr;


        
     
}


