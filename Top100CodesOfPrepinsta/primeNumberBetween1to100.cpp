#include<iostream>
using namespace std;

bool primeNumber1to100(int n)
{
    if(n==0||n==1)
        return false;
    
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        return false;
    }
    
    return true;
}
int main()
{
    cout<<"Prime number between 1 to 100 are : \n";
    for(int i =1;i<=100;i++)
    {
        if(primeNumber1to100(i))
           cout<<i<<" ";
    }
    return 0;
}
