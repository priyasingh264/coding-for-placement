/***********************************************************************
   
  --> Program to check a year is prime number or not
   
***********************************************************************/

#include <iostream>
using namespace std;

bool Prime(int n)
{
    if(n<=1)
    return false;
    
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
int main()
{
    int n=2;
    if (Prime(n)) {
        cout<<n<<" is a prime number";
    } else {
        cout<<n<<" is not a prime number";
    }
    return 0;
}
