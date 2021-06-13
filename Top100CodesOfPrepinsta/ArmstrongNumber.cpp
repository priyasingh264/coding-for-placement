/***********************************************************************
   
  --> Program to finds armstrongnumber
   
***********************************************************************/

#include <iostream>
#include<math.h>
using namespace std;

int armstrong(int n)
{
    int sum=0,digitCount;
    int temp=n;
    while(n!=0)
    {
        digitCount=n%10;
        sum=sum+pow(digitCount,3);
        n=n/10;
    }
    if(temp==sum)
    {
        cout<<temp<<" is armstrong number";
    }
    else
    {
        cout<<"not armstrong";
    }
}
int main()
{
    armstrong(153);
    return 0;
}

