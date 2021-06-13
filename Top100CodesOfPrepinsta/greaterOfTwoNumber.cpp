/***********************************************************************
   
  --> Greater of two number
   
***********************************************************************/
#include <iostream>
using namespace std;

void greaterOfTwoNumber(int a,int b)
{
    if(a>b)
    {
        cout<<"a is greater b\n";
    }
    else if(a==b)
    {
        cout<<"a is equal to b \n";
    }
    else
    {
        cout<<"b is greater than a \n";
    }
}

int main()
{
    greaterOfTwoNumber(43,64);
    greaterOfTwoNumber(10,10);
    greaterOfTwoNumber(24,12);
    return 0;
}
