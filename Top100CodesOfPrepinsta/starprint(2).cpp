#include<bits/stdc++.h>
using namespace std;


void Starpattern(int n)
{
    for(int i=1;i<=5;i++)
    {
        for(int j=i;j<5;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}

int main()
{
    Starpattern(4);
    return 0;
}
