/*************************************************************************

*******************************************************************************/

// C++ program for power of a number
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
