/*
C++ program to print factorial of a prime number
*/

#include<bits/stdc++.h>
using namespace std;


bool primeNumber(int n)
{
    if(n==0||n==1)
            return false;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}


long long factorial(int n)
{
if(n==0)
 return 1;
 
 return n*factorial(n-1);
} 


int main()
{
int i;
int x;
for ( i =0; i<10;i++)
{
    if(primeNumber(i))
    {
        cout<<"Factorial of given prime number  "<<i<<" is : "<<factorial(i)<<"\n";
    }
}
return 0;
}
