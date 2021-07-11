#include<bits/stdc++.h>
using namespace std;


void Starpattern(int n)
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=2*i-1;j++)
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
