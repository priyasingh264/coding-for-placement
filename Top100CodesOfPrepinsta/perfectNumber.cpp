/*************************************************************************

*******************************************************************************/

// C++ program for power of a number
#include <iostream>
using namespace std;
int perfectNumber(int n)
{
    int sum=0;
   int  temp=n;
    for(int i=1;i<n;i++)
    {
        if((n%i)==0)
        {
            cout<<i<<" ";
            sum=sum+i;
        }
        
    }
    cout<<"\n";
if(sum==temp)
{
    cout<<temp<<" is a perfect number";
}
else
{
   cout<<temp<<" not perfect number";
}
}
int main()
{
    perfectNumber(28);
    return 0;
}
