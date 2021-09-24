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

    int n = 10; // led_nos

    int x = 10; // loops , infinite in  real world

    int s = 0; // starting point of line
    int p = 0; // to print

    int pwm_levels[] = {10, 20, 30, 40, 50, 60};
    int len_pwm_levels = sizeof(pwm_levels) / sizeof(pwm_levels[0]);
    cout << "arr size = " << len_pwm_levels << endl;

    len_pwm_levels = 12;

    for (uint8_t loop_i = 0; loop_i < x; loop_i++)
    {
        p = s;
        for (int i = 0; i < n; i++)
        {
            // cout << pwm_levels[p] << " ";
            cout << p << "\t";
            p++;
            if (p == len_pwm_levels)
            {
                p = 0;
            }
        }
        s++;
        if (s == len_pwm_levels)
        {
            s = 0;
        }
        cout << endl;
    }
}
