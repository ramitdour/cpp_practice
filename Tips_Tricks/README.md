### If your program runs but the window flashes and closes immediately

**First, add or ensure the following lines are near the top of your program (Visual Studio users, make sure these lines appear after #include “pch.h” or #include “stdafx.h”, if those exist):**

    #include <iostream>
    #include <limits>

**Second, add the following code at the end of the main() function (just before the return statement):**

    std::cin.clear(); // reset any error flags
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore any characters in the input buffer until we find a newline
    std::cin.get(); // get one more char from the user (waits for user to press enter)
