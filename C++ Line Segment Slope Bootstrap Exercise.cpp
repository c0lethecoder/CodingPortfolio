//A line segment on the Cartesian plane can be represented by two points, (x1,y1), and (x2,y2).
//Write a C++ program, called that will take in a line segment and output its gradient.

#include <iostream>

using namespace std;

int main(){
    
    float x1, y1, x2, y2, g;

    cin >> x1 >> y1 >> x2 >> y2;

    g = (y2 - y1) / (x2 - x1);

    cout << g << endl;

    return 0;
}
