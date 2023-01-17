//In this exercise you will be writing a function that takes the x and y coordinates of a point on the Cartesian plane, as well as a representation of a rectangle, and determines whether the point is inside the rectangle or not.
//The rectangle is represented by 4 values, namely:
//rx - the x coordinate of the top left point
//ry - the y coordinate of the top left point
//rw - the width of the rectangle
//rh - the height of the rectangle
//Therefore the signature of your function is:
//bool pointInRect(float x, float y, float rx, float ry, float rw, float rh)

include <iostream>

// This is so we can use functions from geometry.h
include "geometry.h"

using namespace std;

// We will be reading command line parameters
int main() {

    if (pointInRect(3, 3, 2, 5, 5, 5)) {
        cout << "INSIDE" << endl;
    }
    else {
        cout << "OUTSIDE" << endl;
    }
    
    return 0;
}
