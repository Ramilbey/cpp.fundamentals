#include <iostream>
using namespace std; 

int main(){
    // Write a program to find the maximum element out of total three.
    // int a = 10;
    // int b = 20;
    // int c = 90;

    // if(a > b && a >c)
    //     cout << "max is "<< a << endl;
    // else if(b > a && b > c)
    //     cout << "max is " << b << endl;
    // else
    //     cout << "max is " << c << endl;

//     2.Write a program to find the max element in:
//       a.One dimensional array.
//       Two-dimensional array.
    const int num = 5; 
    int arr[num] = {1, 2, 3, 44, 5};
    int max = arr[0];
    for(int i = 1; i < num; i ++ )
        if(arr[i] > max)
            max = arr[i];
    cout << "max is " << max << endl;
    return 0;

}