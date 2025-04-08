#include <iostream>
using namespace std; 

int main(){
    // Write a program to find the maximum element out of total three.
    int a = 10;
    int b = 20;
    int c = 90;

    if(a > b && a >c)
        cout << "max is "<< a << endl;
    else if(b > a && b > c)
        cout << "max is " << b << endl;
    else
        cout << "max is " << c << endl;
}