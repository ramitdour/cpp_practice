#include <iostream>

using namespace std;

int desired_arry[] = {2, 5, 10};

int current_arry[] = {0, 0, 0};

bool all_equal_flag = false;

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

    print_current_arr();

    while (all_equal_flag == false)
    {
        all_equal_flag = true;

        for (int i = 0; i < 3; i++)
        {
            if (current_arry[i] < desired_arry[i])
            {
                current_arry[i] = current_arry[i] + 1;
            }
        }
        print_current_arr();

        for (int k = 0; k < 3; k++)
        {
            all_equal_flag = (all_equal_flag && (current_arry[k] == desired_arry[k]));
        }
    }

    cout << "all done" << endl;
}