#include<bits/stdc++.h>
using namespace std;



int factorial(int n)
{
    if(n==0)
    return 1;
return n*factorial(n-1);    
}

void factorialOfNonDuplicate(int arr[],int n)
{
    map<int,int>v;
    for(int i=0;i<n;i++)
    {
        v[arr[i]]++;
    }
    for(auto x:v)
    {
        if(x.second==1)
        {
            cout<<x.first<<" "<<factorial(x.first)<<"\n";
        }
    }
}
int main()
{
    int arr[]={2,9,9,3,7,9,3,7,7,8,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    factorialOfNonDuplicate(arr,n);
    return 0;
}
