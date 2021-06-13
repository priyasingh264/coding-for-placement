/***********************************************************************
   
  --> sum of first n natural number
   
***********************************************************************/
#include <iostream>
using namespace std;

int naturalNumber(int n)
{
 int sum=n*(n+1)/2;
 return sum;
}

int main()
{
    int n=23;
    cout<<naturalNumber(n);
    return 0;
}
