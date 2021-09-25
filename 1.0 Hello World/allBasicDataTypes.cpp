#include <iostream>

using namespace std;

int main()
{
    // commonly used data types
    int a1;
    long aa;

    float b1;
    double bb;

    bool flag;

    int width; // define an integer variable named width
    width = 5; // copy assignment of value 5 into variable width

    // variable width now has value 5

    int a;     // no initializer
    int b = 5; // initializer after equals sign
    int c(6);  // initializer in parenthesis
    int d{7};  // initializer in braces

    cout << "Hello World" << endl;
}