// C++ program to check h.c.f of two number

#include <iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return gcd(b,a%b);
    }
}
int main()
{
    cout<<gcd(12,15);
    return 0;
}
