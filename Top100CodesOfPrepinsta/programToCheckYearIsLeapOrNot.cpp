/***********************************************************************
   
  --> Program to check a year is leap or not
   
***********************************************************************/

#include <iostream>
using namespace std;

void leapYear(int n)
{
   if(((n%4==0)&&(n%100!=0))||(n%400==0))
   {
       cout<<n<<" is a leap year \n";
   }
   else
   {
       cout<<n<<" is not leap year \n";
   }
} 
   
int main()
{
    leapYear(2000);
    leapYear(2004);
    leapYear(2100);
    leapYear(1998);
    return 0;
}
