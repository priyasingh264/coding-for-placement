/*************************************************************************

*******************************************************************************/

// C++ program for power of a number
#include <iostream>
using namespace std;
int factor(int num)
{
    for(int i=1;i<=21;i++)
    {
        if (num%i==0)
        {
            cout<<i<<" ";
        }
    }
}
int main()
{
    factor(21);
    return 0;
}
