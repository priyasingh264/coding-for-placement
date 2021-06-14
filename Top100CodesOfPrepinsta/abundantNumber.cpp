/*

Abundant number is an number in which the sum of the proper divisors of the number is greater than the number itself.

To check for Abundant number, find and add the proper divisors of the number , 
compare the sum with the number if the sum is greater than the number than the number is an Abundant number else not an Abundant number. 

*/

// C++ program form check wether number is Abundant number or not

#include <iostream>
using namespace std;
void abundant(int n)
{
int sum=0;
for(int i=1;i<n;i++)
{
    if(n%i==0)
    sum=sum+i;
}
cout<<sum<<"\n";
if(sum>n)
{
    cout<<n<<" is abundant no.";
}
else
{
    cout<<n<<" is not abundant no.";
    
}
}
int main()
{
    abundant(12);
    return 0;
    
}


