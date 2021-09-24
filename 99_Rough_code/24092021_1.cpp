// 0 1 2 3 4 5
// 1 2 3 4 5 0
// 2 3 4 5 0 1
// 3 4 5 0 1 2
// 4 5 0 1 2 3
// 5 0 1 2 3 4

// 0 1 2 3 4 5
// 5 0 1 2 3 4
// 4 5 0 1 2 3
// 3 4 5 0 1 2
// 2 3 4 5 0 1
// 1 2 3 4 5 0

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World" << endl;

    int n = 6;  // length
    int x = 10; // loops

    int p = 0; // to print

    for (uint8_t x = 0; x < n; x++)
    {
        for (int i = 0; i < n; i++)
        {
            cout << p << " ";
            p++;
            if (p == n)
            {
                p = 0;
            }
        }
        p++;
        cout << endl;
    }

    // for (uint8_t x = 0; x < n; x++)
    // {
    //     for (int i = 0; i < n; i++)
    //     {
    //         cout << p << " ";
    //         p++;
    //         if (p == n)
    //         {
    //             p = 0;
    //         }
    //     }
    //     p = p - 1;
    //     if (p < 0)
    //     {
    //         p = n - 1;
    //     }
    //     cout << endl;
    // }
}
