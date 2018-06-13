/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    cout<<"Hello World";
    cout<<"\nAnother Hello World\n";
    int ans = 0;
    for(int i=0; i <= 10; i++)
    {
        cout << ans << "\n";
        ans = ans + i;
    }
    cout << ans ;

    return 0;
}
