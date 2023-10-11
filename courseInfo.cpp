#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

struct Time {
    int hour;
    int minute;
};

struct Course {
    string name;
    int credits;
    bool majorRequirement;
    double avgGrade;
    string days;
    Time startTime;
    Time endTime;
};

void printSchedule(Course courses[], int numCourses) {
    cout << "SCHEDULE OF STUDENT" << endl;
    cout << "-----------------" << endl;
    for (int i = 0; i < numCourses; i++) {
        cout << courses[i].name << endl;
        cout << "Credits: " << courses[i].credits << endl;
        cout << "Major requirement: ";
        if (courses[i].majorRequirement) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
        cout << "Average grade: " << courses[i].avgGrade << "%" << endl;
        cout << "Lecture days: " << courses[i].days << endl;
        cout << "Start time: " << setw(2) << setfill('0') << courses[i].startTime.hour << ":"
             << setw(2) << setfill('0') << courses[i].startTime.minute << endl;
        cout << "End time: " << setw(2) << setfill('0') << courses[i].endTime.hour << ":"
             << setw(2) << setfill('0') << courses[i].endTime.minute << endl;
        cout << "-----------------" << endl;
    }
}

int main() {
    ifstream infile("in.txt");
    if (!infile.is_open()) {
        cerr << "Failed to open file." << endl;
        return 1;
    }

    int numCourses;
    infile >> numCourses;
    if (numCourses == 0) {
        cout << "SCHEDULE OF STUDENT" << endl;
        cout << "-----------------" << endl;
        cout << "No courses found." << endl;
        return 0;
    }

    Course courses[numCourses];
    for (int i = 0; i < numCourses; i++) {
        infile.ignore(100, '\n');
        getline(infile, courses[i].name);
        infile >> courses[i].credits;
        infile >> courses[i].majorRequirement;
        infile >> courses[i].avgGrade;
        infile.ignore(100, '\n');
        getline(infile, courses[i].days);
        char colon;
        infile >> courses[i].startTime.hour >> colon >> courses[i].startTime.minute;
        infile >> courses[i].endTime.hour >> colon >> courses[i].endTime.minute;
    }
    infile.close();

    printSchedule(courses, numCourses);

    return 0;
}
