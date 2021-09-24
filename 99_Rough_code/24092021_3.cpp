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
    // cout << "Hello World" << endl;

    int loop_count = 20; // nos of loop , in real world infinite i.e. while loop
    int n = 5;           // nos of leds

    //not required as of now.
    uint8_t pwm_levels_arr[] = {20, 30, 40, 50};
    int len_pwm_levels_arr = sizeof(pwm_levels_arr) / sizeof(pwm_levels_arr[0]);

    int first_d = 0; // first digit of row , starting  no 
    int to_prt_d = 0; // temp varible which will hold the value to be printed 

    // this loop will be responsiable for how many times rows should be printed.(real world infity)/
    // will be replaced by while(true){}
    // value of i will not be required any where else in the calcuation
    for (int i = 0; i < loop_count; i++)
    {
        to_prt_d = first_d; // first value of row assigned to printer

        // this loop will be responsiable for how many columns to be printed ,
        // value of j will not be required any where else in the calcuation
        for (int j = 0; j < n; j++)
        {   
            // \t to similar pressing space
            cout << to_prt_d << "\t"; // printing the desired value

            to_prt_d++; // increased by 1 

            // if  value reach to to maximum limit that rest value to 0 
            if (to_prt_d == n)
            {
                to_prt_d = 0;
            }
        }

        first_d--;

         // if  value reach to minimum limit(i.e. 0 se kam) that rest value to maximum limit( n - 1)
        if (first_d < 0)
        {
            first_d = n - 1;
        }

        // similar to pressing enter 
        cout << endl;
    }
}
