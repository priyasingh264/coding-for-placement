/***********************************************************************
   
  --> Program to check a number is prime in a given range
   
***********************************************************************/

#include <iostream>
using namespace std;

bool GivenRange(int n)
{
    if( n==0|| n==1 )
          return false;
    
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main(){
int l=1,h=20;
for(int i =l ; i<=h;i++)
{
 if (GivenRange(i)) 
 {
  cout<<i<<" ";
 }
}
return 0;
}
