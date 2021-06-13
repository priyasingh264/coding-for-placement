/***********************************************************************
   
  --> sum of numbers in a given range
   
***********************************************************************/
#include <iostream>
using namespace std;

int numberInGivenRange(int high,int low)
{
    int sum=high*(high+1)/2 -low*(low-1)/2;
    return sum;
}

int main()
{
    int high=8,low=4;
    cout<<numberInGivenRange(high,low);
    return 0;
}
