/*
An automorphic number is a number in which the last digits of the square of the number is equal to the number itself.

To check for Automorphic number, first find the square of the number. Then compare the last digits of the square by the number digit by digit and then are equal then it’s an Automorphic number else not.

Example: 25
Square of 25 = 625
As we can see the last digits of square equals to the number, so 25 is an Automorphic number.

Program to check for automorphic number

*/
// C++ program form check wether number is Automorphic number

#include <iostream>
using namespace std;
int autoMorphicNumber(int n)
{
int sq=n*n;
while(n!=0)
{
    if(n%10!=sq%10)
    {
       return 0; 
    }
    n=n/10;
    sq=sq/10;
}
 return 1;
}
int main()
{
    int n = 27;
    if(autoMorphicNumber(n))
    {
        cout<<n*n<<" is the square of the given number \n";
        cout<<n<<" is an automorphic number";
    }
    else
    {
       cout<<n*n<<" is the square of the given number \n";
       cout<<n<<" is not an automorphic number"; 
    }
    return 0;
}
