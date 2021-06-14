/*

Amicable numbers are two different numbers related in a way such that the sum of the proper divisors of each is equal to the other number. 
A proper divisor is a positive factor of that number other than the number itself ,for Example proper divisors of 6 are 1, 2, and 3.

The smallest pair of amicable numbers is (220, 284). 
They are amicable because the sum of proper divisors of 220 (1, 2, 4, 5, 10, 11, 20, 22, 44, 55 and 110) is 284; 
and the sum of proper divisors of 284 (1, 2, 4, 71 and 142) is 220.
 

*/

// C++ program form check wether the two numbers are friendly pair or not

#include <iostream>
using namespace std;
int sumOfFactors(int n)
{
   int sum = 0;
   for(int i=1;i<=n/2;i++)
    {
        if(n%i==0)
        sum=sum+i;
    }
    return sum;
}

void friendlyPair(int first ,int second)
{
    int sum1=0,sum2=0;
    sum1 = sumOfFactors(first);
    cout<<sum1<<"\n";
    sum2 = sumOfFactors(second);
    cout<<sum2<<"\n";
    if((first==sum2) &&(second==sum1))
    {
        cout<<first<<" "<<second <<" it is friendly pair";
    }
    else
    {
        cout<<first<<" "<<second <<" it is not a friendly pair";
    }
}

int main()
{
  friendlyPair(220,284);
  return 0;
}


