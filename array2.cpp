#include <iostream>
using namespace std;

int main(){
cout << "Enter the string to reverse: " ;
//char arr[100];
string bro;
getline(cin, bro);
/*for (int i = 0; i < bro.length();i++){
    int a = bro.length();
    arr[a] = bro[i];
    a--;
}
I realized midway through I did not even need to make an array I just needed to consider the string as an array 
in and of itself.
*/
for (int c = bro.length(); c >= 0; c-- ){
    cout << bro[c];
}
return 0;

}