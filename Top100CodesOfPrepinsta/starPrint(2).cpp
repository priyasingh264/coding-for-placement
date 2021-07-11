#include<bits/stdc++.h>
using namespace std;


void Starpattern(int n)
{
    for(int i=1;i<=5;i++)
    {
        for(int j=2*i-1;j<=8;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}

int main()
{
    Starpattern(5);
    return 0;
}
