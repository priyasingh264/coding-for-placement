/***********************************************************************
   
  --> Program to finds reverse of a number
   
***********************************************************************/

#include <iostream>
using namespace std;
int reverseOfNumber(int n)
{
    int rem,reverse=0;
    while(n!=0)
    {
       rem=n%10;
       reverse=reverse*10+rem;
       n=n/10;
    }
return reverse;
}
int main()
{
    int n=3451;
    cout<<reverseOfNumber(n);
    return 0;
}
