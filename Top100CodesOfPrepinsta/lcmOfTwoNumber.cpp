
// C++ program to check l.c.m of two number

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

int lcm(int a,int b)
{
    return (a*b)/gcd(a,b);
}

int main()
{
    cout<<lcm(12,15);
    return 0;
}
