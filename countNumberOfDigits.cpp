#include<iostream>
using namespace std;
int digits(int n)
{
    int count=0;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    return count;
    
}
int main()
{
    int n=-10;
    cout<<digits(n);
    return 0;
}
