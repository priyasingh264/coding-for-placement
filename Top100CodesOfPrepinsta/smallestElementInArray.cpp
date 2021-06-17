#include<bits/stdc++.h>
using namespace std;

int smallestElement(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        sort(arr,arr+n);
    }
    return arr[0];
}
int main()
{
    
int arr[5]={8,3,4,5,6};
cout<<smallestElement(arr,5);
return 0;
}
