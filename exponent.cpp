/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
int expo = 5; 
int y = 2;
int base = y;

for (int i = 1; i< expo; i++)
{
y *=base;
}
cout << y <<endl;

    return 0;
}
