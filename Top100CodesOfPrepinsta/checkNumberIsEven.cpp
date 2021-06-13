#include <iostream>
using namespace std;
int evenNumber(int n)
{
    if(n%2==0)
    {
       cout<<"number is even"; 
    }
    else
    {
        cout<<"number is odd";
    }
}
int main()
{
    int n=71;
    evenNumber(n);
    return 0;
}
