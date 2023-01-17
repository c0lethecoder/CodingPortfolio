#ifndef DATE_H
#define DATE_H

#include <ostream>
#include <string>
struct Date{
	int day;
	int month;
	int year;

	Date(){
		day = 0;
		month = 0;
		year = 0;
	}

	Date(int m, int d, int y){
		day = d;
		month = m;
		year = y;
	}
};


bool operator== (const Date& lhs, const Date& rhs){
	if(lhs.month == rhs.month && lhs.day == rhs.day && lhs.year == rhs.year){
        return true;
    }
    else{
        return false;
    }
}

bool operator!= (const Date& lhs, const Date& rhs){
	if(lhs.month != rhs.month || lhs.day != rhs.day || lhs.year != rhs.year ){
        return true;
    }
    else{
        return false;
    }
}

bool operator< (const Date& lhs, const Date& rhs){
    if(lhs.year == rhs.year && lhs.month < rhs.month){
        return true;
    }
    else if(lhs.year < rhs.year){
        return true;
    }
    else if(lhs.year == rhs.year && lhs.month == rhs.month && lhs.day < rhs.day){
        return true;
    }
    else{
        return false;
    }

}

bool operator> (const Date& lhs, const Date& rhs){
	return (!(lhs <rhs) && !(lhs == rhs));
}

bool operator<= (const Date& lhs, const Date& rhs){
    return((lhs < rhs) || (lhs == rhs));
}

bool operator>= (const Date& lhs, const Date& rhs){
	return((lhs > rhs) || (lhs == rhs));
}


int operator-(const Date& today, const Date& birthday){
    int age =(today.year - birthday.year);
    if (today.month > birthday.month){
        return age;
    }
    else if (today.month == birthday.month && today.day >= birthday.day){
        return age;
    }
    else {
        return age - 1;
    }
        
}

std::ostream & operator<< (std::ostream& os, const Date& date){
	std::string m = std::to_string(date.month);
	std::string d = std::to_string(date.day);

	if (date.month < 10){
		m = "0" + m;
	}

	if (date.day < 10){
		d = "0" + d;
	}
	os << date.month << "/" << date.day << "-" << date.year;
	return os;
}

#endif
