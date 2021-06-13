#include <iostream>
using namespace std;
int positiveNumber(int n)
{
    if(n>0)
    {
        cout<<"number is positive"<<" ";
    }
    else
    {
        cout<<"no.is negative";
    }
}
int main()
{
    int n=-1;
    positiveNumber(n);
    return 0;
}
