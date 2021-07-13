/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void NumberPrint(int n)
{
    for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<"\n";
    }
    
}

int main()
{
    NumberPrint(5);
    return 0;
}
