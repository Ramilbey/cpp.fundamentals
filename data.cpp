#include <iostream>
using namespace std; 

int main(){
    // Write a program to find the maximum element out of total three.
    int a = 10;
    int b = 200;
    int c = 90;

    if(a > b && a >c)
        cout << "max is "<< a << endl;
    else if(b > a && b > c)
        cout << "max is " << b << endl;
    else
        cout << "max is " << c << endl;

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

//    Two-dimensional array
    // const int row = 3;
    // const int col = 4;
    // int arr[row][col] = {{1, 2, 3, 4},
    //                      {4, 5, 6, 7},
    //                      {6, 7, 8, 9}};
                         
    // int max ;
    // for (int i = 0; i < row; i++)
    //     for (int j = 0; j < col; j ++)
    //         if(arr[i][j] > max)
    //             max = arr[i][j];
    // cout << max << endl;
    // return 0;
}