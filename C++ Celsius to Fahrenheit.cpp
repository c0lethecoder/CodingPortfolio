//Write a C++ program to convert degrees Celsius to Fahrenheit. 
//Your program should read in the number from standard input, and output the result of the conversion to standard output.
//The formula for converting from Celsius to Fahrenheit is:
//Tf = (Tc * 9/5)+32
//where Tc is the reading in Celsius, and Tf is the desired Fahrenheit result.


#include <iostream>

using namespace std;

int main(){

    float Tf, Tc ;

   
    cin >> Tc ;

    Tc *= 9;
    Tc /= 5;
    Tc += 32;
    Tf = Tc;



    cout  << Tf << endl;


    return 0;
   
}
