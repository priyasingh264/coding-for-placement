/***********************************************************************
   
  --> Program to sum of digits of a number
   
***********************************************************************/

#include <iostream>
using namespace std;
int sumOfDigits(int n)
{
    int sum=0;
    while(n!=0)
    {
        sum = sum + n%10;
        n=n/10;
    }
    return sum;
}
int main()
{
    int n=231;
    cout<<"Sum of digits are = "<<sumOfDigits(n);
    return 0;
}
