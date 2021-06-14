/*
Strong Numbers is a number in which the sum of factorial of individual digits of the numbers is equal to the number itself.

To check for Strong Number, break the number into digits, find and add the factorial of each digit and lastly compare the result to the number. If both are equal then the number is a String Number else not a Strong Number.

For Example:145

Sum of factorial of digits of number   = 1! x 4! x 5=  145
*/

// C++ program for strong number
#include <iostream>
using namespace std;
int factorial(int n)
{
    int res=1;
    
    if((n==0)||(n==1))
    return 1;
    
    for(int i=2;i<=n;i++)
    {
        res=res*i;
    }
    return res;
    
}
void strongNumber(int num)
{
    int temp=num,rem,sum=0;
    while(num!=0)
    {
       rem=num%10;
       sum=sum+factorial(rem);
       num=num/10;
    }
    if(temp==sum)
    {
        cout<<temp<<"  is a strong number";
    }
    else
    {
        cout<<temp<<" not strong number";
    }
}
int main()
{
    strongNumber(123);
    return 0;
}
