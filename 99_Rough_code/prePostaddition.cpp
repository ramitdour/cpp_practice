#include <iostream>

using namespace std;

int main()
{
    int x = 0;

    int i = 0;
    cout << "start" << i << "," << x << endl;

    for (i = 0; i < 10; x = i++)
    {
        cout << i << "," << x << endl;
    }

    cout << "last" << i << endl;

    x = 0;
    i = 0;
    cout << "\nstart" << i << "," << x << endl;

    for (i = 0; i < 10; x = ++i)
    {
        cout << i << "," << x << endl;
    }

    cout << "last" << i << endl;


    /*
    int x = 10, a;
  
    a = x++;
  
    cout << "Post Increment Operation";
  
    // Value of a will not change
    cout << "\na = " << a;
  
    // Value of x change after execution of a=x++;
    cout << "\nx = " << x;
    */
}