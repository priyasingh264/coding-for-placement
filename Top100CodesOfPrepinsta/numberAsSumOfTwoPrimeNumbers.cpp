/*

Program to check whether a number be expressed as a sum of two prime numbers
Prime number is a number which only have two divisors i.e. a number which can not be divided by any other number other than 1 or itself is a prime number.

There are many theories which express numbers as a sum of two primes like Goldbach’s Conjecture which states that any even number greater than 2 can be expressed as a sum of two primes.

Here we will check for all the numbers if they can be expressed as sum of two primes or not.

*/

#include<bits/stdc++.h>
using namespace std;
 int prime(int n)
 {
     if (n == 1)
         return false;
     for (int i=2;i<=n/2;i++)
     {
         if (n%i==0)
             return false;
     }
     return true;
 }


int check(int n)
{
    int sec;
    for (int i=2;i<n-1;i++)
    {
        if (prime(i))
        {
            sec = n - i;
            if (prime(sec))
            {
                cout<<n<<" can be expressed as sum of two prime numbers that are "<<i<<" and "<<n-i<<"\n";
                return true;
            }
        }
    }
    cout<<n<<" cannot expressed as sum of two prime numbers\n";
    return false;
}

int main()
{
    check(20);
    check(11);
    return 0;
}
