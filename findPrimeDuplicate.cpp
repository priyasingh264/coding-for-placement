#include<bits/stdc++.h>
using namespace std;



int prime(int n)
{
    if(n==1||n==0)
    return 0;
    
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
void duplicateInprime(int arr[],int n)
{
    map<int,int>v;
    for(int i=0;i<n;i++)
    {
        v[arr[i]]++;
    }
    for(auto x:v)
    {
        if(x.second>1 && prime(x.first))
        cout<<x.first<< " "<<x.second<<"\n";
    }
    
}
int main()
{
    int arr[]={2,9,9,3,7,9,3,7,7,8,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    duplicateInprime(arr,n);
    return 0;
}
