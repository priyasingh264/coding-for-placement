/*
A Harshad number is a positive integer which is divisible by the sum of the digits of the integer. It is also called the Niven number.

To find the Harshad number find and add the digits of the number. If the number is divisible by the sum then the number is a Harshad number else not a Harshad number.

For Example : 153

Sum of digits = 1 + 5 + 3= 9

153 is divisible by 9 so 153 is a Harshad Number.
*/

// C++ program form check wether number is Harshad number or not

#include <iostream>
using namespace std;
void harshadNumber(int n)
{
    int sum=0,rem,temp=n;
while(n!=0)
{
    rem=n%10;
    sum=sum+rem;
    n=n/10;
}
if(temp%sum==0)
{
    cout<<temp<<" is harshad number";
}
else
{
    cout<<temp<<" is not harshad";
}

}
int main()
{
    harshadNumber(154);
    return 0;
}
