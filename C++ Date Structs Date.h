#include <iostream>
#include <iomanip>
#include <ostream>


using namespace std;

struct Date {
    int month;
    int day;
    int year;


    Date(){
    month = 1;
    day = 1;
    year = 1970; 
    }

    Date(int m, int d, int y){
    month = m;
    day = d;
    year = y; 
    }

};

ostream& operator <<(ostream& os, const Date& dt){
    os << setw(2) << setfill('0') << dt.month << "/" << setw(2) << setfill('0') << dt.day <<  '/'  << dt.year;

    return os;
}

