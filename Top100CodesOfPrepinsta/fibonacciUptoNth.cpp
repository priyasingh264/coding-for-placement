/***********************************************************************
   
  --> Program for fibonnici series upto Nth term
   
***********************************************************************/

#include <iostream>
#include<math.h>
using namespace std;


int fibonacciUptoNth(int n)
{
    int first = 1,second =1;
    int sum=0;
    cout<<first<<" "<<second<<" ";
    while((first+second)<30)
    {
        sum= first +second ;
        cout<<sum<<" ";
        first =second ;
        second =sum;
    };
    return sum;
}
int main()
{
    fibonacciUptoNth(30);
    return 0;
}
