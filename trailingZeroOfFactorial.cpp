/*

Program to write trailing zeroes in the factoial of a number.

*/

#include <iostream>
using namespace std;

int trailingZero(int n)
{
    int sum = 0;
    if (n<5)
    {
        return 0;
    }
    else
    {
        while(n!=0)
        {
            n = n/5;
            sum = sum + n;
        }
    }
    return sum;
}


int main()
{
    int fact;
    cout<<"Enter the factorial whose trailing zeroes need to be counted : ";
    cin>>fact;
    cout<<"Number of trailing zeroes in factorial is : "<<trailingZero(fact);
    return 0;
}
