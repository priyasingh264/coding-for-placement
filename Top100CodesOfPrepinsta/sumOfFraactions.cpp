/*
 Program to find sum of fractions of two numbers
*/

#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)
      return a;
    else
      return gcd(b,(a%b));
}

int lcm(int a,int b)
{
    return (a*b)/gcd(a,b);
}

void sumOfFraction(int n1,int d1,int n2,int d2)
{
   int n3,d3;
   d3 = lcm(d1,d2);
   n3 = (d3/d1)*n1 + (d3/d2)*n2;
   cout<<" = "<<n3<<"/"<<d3;
}

int main()
{
    int n1=2,n2=3,d1=4,d2=6;
    cout<<n1<<"/"<<d1<<" + "<<n2<<"/"<<d2;
    sumOfFraction(n1,d1,n2,d2);
    return 0;
}
