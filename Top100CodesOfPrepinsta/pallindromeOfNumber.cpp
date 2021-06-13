/***********************************************************************
   
  --> Program to finds pallindromeofnumber
   
***********************************************************************/

#include <iostream>
using namespace std;
int pallindrome(int num)
{
    int rem,reverse=0,temp =num;
    while(num!=0)
    {
       rem=num%10;
       reverse=reverse*10+rem;
       num=num/10;
    }
    if(temp==reverse)
    {
        cout<<temp<<" is pallindrome";
    }
    else
    {
        cout<<temp<<" is not pallindrome";
    }
}
int main()
{
  pallindrome(161); 
  return 0;
}

