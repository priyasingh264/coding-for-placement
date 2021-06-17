#include<bits/stdc++.h>
using namespace std;

void FirstHalfInAscendingAndSecondHalfIsDecending(int arr[],int n)
{
    sort(arr,arr+n);
    for(int i=0;i<n/2;i++)
    cout<<arr[i];
    
    for(int j=n-1;j>=n/2;j--)
    cout<<arr[j];
}
int main()
{
    int arr[8]={3,4,1,8,9,7,5,2};
    FirstHalfInAscendingAndSecondHalfIsDecending(arr,8);
    return 0;
}
