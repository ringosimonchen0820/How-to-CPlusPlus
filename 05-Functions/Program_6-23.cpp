// This program shows that a static local variable is only
//  initialized once.

#include <iostream>
using namespace std;

// Function prototype
void showStatic();

int main()
{
    // Call the showStatic function 5 times
    for (int count = 0; count < 5; count++)
    {
        showStatic();
    }

    return 0;
}

//***************************************************************
//* Definition of function showStatic.                          *
//*  statNum is a static local variable. Its value is displayed *
//*  and then incremented just before the function returns.     *
//***************************************************************

void showStatic()
{
    static int statNum = 5;

    cout << "statNum is " << statNum << endl;
    
    statNum++;
}