#include<iostream>
using namespace std;

int countXdivisors(int n, int x)
{
    int count=0;
    cout<<"Divisior of "<<n<<" are : ";
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
         cout<<i<<" ";    
         count++;
        }
    }
    cout<<"\nSo "<<n<<" have "<<count<<" divisiors\n";
    if(count==x)
       return true;
    else
       return false;
}
int main()
{
    int x=4,n=12;
    if (countXdivisors(n,x))
        cout<<n<<" have "<<x<<" divisors\n";
    else
        cout<<n<<" doesn't have "<<x<<" divisors\n";
    return 0;
}
