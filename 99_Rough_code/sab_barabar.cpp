#include <iostream>

using namespace std;

int desired_arry[] = {2, 5, 10};

int current_arry[] = {0, 0, 0};

bool all_equal_flag = true;

void print_current_arr()
{
    for (int i = 0; i < 3; i++)
    {
        cout << current_arry[i] << "\t";
    }
    cout << endl;
}

int main()
{

    // 0,0,0
    // 1,1,1
    // 2,2,2
    // 2,3,3
    // 2,4,4
    // 2,5,5
    // 2,5,6
    // 2,5,7
    // 2,5,8
    // 2,5,9
    // 2,5,10
    print_current_arr();

    for (int j = 0; j < 50; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            if (current_arry[i] < desired_arry[i])
            {
                current_arry[i] = current_arry[i] + 1;
            }
        }

        // checking if  current_arry == desired_arry

        // for (int i = 0; i < 3; i++)
        // {
        //    if( current_arry[i] == desired_arry[i]){

        //    }
        // }

        print_current_arr();

        // (current_arry[0] == desired_arry[0]) &&
        // (current_arry[1] == desired_arry[1]) &&
        // (current_arry[2] == desired_arry[2])

        for (int k = 0; k < 3; k++)
        {
            all_equal_flag = ( all_equal_flag && (current_arry[k] == desired_arry[k])  ) ;


            // bool i_check = (current_arry[k] == desired_arry[k]);

            // bool temp = all_equal_flag && i_check;

            // all_equal_flag = temp;
        }

        if (all_equal_flag)
        {
            break;
        }

        all_equal_flag = true;
    }

    cout << "all done" << endl;
}