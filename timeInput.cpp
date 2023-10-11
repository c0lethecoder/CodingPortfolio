#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Time {
    int hour;
    int minute;
    int second;
};

bool getTimeFromUser(Time& structTime) {
    string time;
    getline(cin, time);
    if (time.size() == 8 && time[2] == ':' && time[5] == ':') {
        int hour = stoi(time.substr(0, 2));
        int minute = stoi(time.substr(3, 2));
        int second = stoi(time.substr(6, 2));
        if (hour < 0 || hour > 23 || minute < 0 || minute > 59 || second < 0 || second > 59) {
            cout << "The time entered is invalid!";
            return false;
        } else {
            structTime.hour = hour;
            structTime.minute = minute;
            structTime.second = second;
            return true;
        }
    } else {
        cout << "The time entered is invalid!";
        return false;
    }
}

void print24Hour(Time structTime) {
    cout << setfill('0') << setw(2) << structTime.hour << ":";
    cout << setfill('0') << setw(2) << structTime.minute << ":";
    cout << setfill('0') << setw(2) << structTime.second;
}

int main() {
    Time startTime, endTime;
    cout << "Enter the start time for the lecture (format is HH:MM:SS): ";
    while (!getTimeFromUser(startTime)) {
        cout << "\nEnter the start time for the lecture (format is HH:MM:SS): ";
    }
    cout << "\nEnter the end time for the lecture (format is HH:MM:SS): ";
    while (!getTimeFromUser(endTime)) {
        cout << "\nEnter the end time for the lecture (format is HH:MM:SS): ";
    }
    cout << "\nThe lecture starts at ";
    print24Hour(startTime);

    cout << " and ends at ";
    print24Hour(endTime);

    return 0;
}
