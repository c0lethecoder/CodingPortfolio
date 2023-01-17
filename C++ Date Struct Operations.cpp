//In this exercise we are implementing some overloaded operators for a Date structure. You are provided with a Date struct, which has 2 constructors and an overloaded operator<<, allowing us to cout our dates.
//The first set of operators we need to implement are the comparison operators. They should work intuitively, as in how we normally compare dates, where date x is greater than date y if x occurred later than y. 
//For example 11/11/2022 is greater than 01/24/1984. Two dates are equal if they are the same day, month and year.
//Implement the missing code for all the comparison operators in Date.h.
//In addition there is also an operator- defined for 2 dates. The way date subtraction works is to return the number of full years that have passed between the 2 dates. 
//Assume that the first argument (left-hand side) will always be larger than the other one. Look at test.cpp (the TestAge spec) to see a complete example of how date subtraction is expected to work.

#include <iostream>
#include "Date.h"

using namespace std;

int main(){

    Date* dates = new Date[3];

    dates[0] = Date();
    dates[1] = Date(11,11,1918);
    dates[2] = Date(7,4,2022);
    
    for (int i = 0; i < 3; i++){
        cout << dates[i] << endl;
    }

    delete[] dates;

    return 0;
}
