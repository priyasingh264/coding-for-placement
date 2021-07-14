/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void DiamondPattern(int n)

{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    
    for(int l=n-1;l<=1;l--)
    {
        for(int m=1;m<=l-1;m--)
        {
            cout<<" ";
        }
        for(int p=1;p<=2*l+1;p--)
        {
            cout<<"*";
        }
    }
}

int main()
{
    DiamondPattern(7);
    return 0;
}
