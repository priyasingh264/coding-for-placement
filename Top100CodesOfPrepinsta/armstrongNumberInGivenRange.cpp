/***********************************************************************
   
  --> Program to finds armstrong number in given range
   
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
        cout<<temp<<" ";
    }
}
int main()
{
    int l=1,h=153;
    for(int i=l;i<=h;i++)
    {
    armstrong(i);
    }
    return 0;
}

