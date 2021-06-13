/***********************************************************************
   
  --> Program to finds armstrongnumber
   
***********************************************************************/

#include <iostream>
#include<math.h>
using namespace std;
int countDigit(int n)
{
    int count =0;
    while(n!=0)
    {
        n =n/10;
        count++;
    }
    
    return count;
}

int armstrong(int n)
{
    int sum=0,rem;
    int temp=n;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+pow(rem,countDigit(temp));
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

