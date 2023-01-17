//Write a C++ program, called that will take in a line segment and output its length. To remind you, the line of a line segment defined by two points,
//(x1,y1)(x2,y2) is given by,
//  sqrt((x1-x2)^2+(y1-y2)^2)

#include <iostream>
#include<math.h>

using namespace std;

int main(){
    float x1, y1, x2, y2, l, a, b;
    cin >> x1 >> y1 >> x2 >> y2;

    a = pow(x1 - x2 , 2);
    b = pow(y1 - y2, 2);
    l = sqrt(a + b);

    cout << l << endl;


    return 0;
}
