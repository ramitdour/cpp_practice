#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    for (int i = 0; i < 10; i++)
    {
        // cout << i << " " <<flush();
        std::cout << i << '\n' << std::flush;

        // flush();
        Sleep(1000);
    }
}
