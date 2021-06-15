/************************************************************************
 * Program to find Permutations in which n people can occupy r seats in a classroom
This is a problem specific program which deals with problems like in how many ways employees can be arranged in the seats available in a company or the same for the students in a school or college.

This problem can be easily solved by the use of the simple formula of permutations which is

nPr =    n! / (n-r)!

Example: we have 5 students and the total number of seats are 6.

Permutations             =    6P5=    6! / (6-5)!   =    720.

So, there are 720 ways in which 5 students can be arranged in 6 seats.

*******************************************************************************/

#include <iostream>
using namespace std;

int fact(int n)
{
    if(n==0)
    {
     return 1;
    }
    else
    {
     return (n*fact(n-1));
    }
}

int permutations(int n,int r)
{
    int ch=0;
    ch = fact(n)/fact(n-r);
    return ch;
}

int main()
{
    int n=6,r=5;
    cout<<"Number Of people : "<<n<<"\n";
    cout<<"Number of seats :  "<<r<<"\n";
    cout<<"Total possible arrangements = : "<<permutations(n,r);
    return 0;
}
