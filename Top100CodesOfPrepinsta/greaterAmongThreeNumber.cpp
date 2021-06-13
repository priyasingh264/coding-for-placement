/***********************************************************************
   
  --> Greater of three number
   
***********************************************************************/

#include <iostream>
using namespace std;

void greaterOfThreeNumber(int a,int b,int c)
{
    if(a>b && a>c)
    {
        cout<<"a is greatest among three number \n";
    }
    else if(b>a && b>c)
    {
        cout<<"b is greater among three number \n";
    }
    else if(a==b && b==c)
    {
        cout<<"All three numbers are equal \n";
    }
    else
    {
        cout<<"c is greater among three number \n";
    }
}

int main()
{
    greaterOfThreeNumber(27,14,12);
    greaterOfThreeNumber(12,14,11);
    greaterOfThreeNumber(12,15,19);
    greaterOfThreeNumber(12,12,12);
    
    return 0;
}
