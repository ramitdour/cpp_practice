#include <iostream>

using namespace std;

int main()
{

    int a = 3;
    int b = 5;

    cout << "a=" << a << " b=" << b << endl;

    // a = b;
    // cout << "a=" << a << " b=" << b << endl;

    // b = a;
    // cout << "a=" << a << " b=" << b << endl;



    // Swapping 
    // int temp = 0;
    // temp = b;

    // b = a;
    // a = temp;

    // cout << "a=" << a << " b=" << b << endl;



    // Swapping without third variable
    // 3 , 5
    a = a + b;
    // 8 , 5

    b = a - b;
    // 8 , 3

    a = a - b;
    //5 , 3

    cout << "a=" << a << " b=" << b << endl;
}