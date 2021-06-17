#include<bits/stdc++.h>
using namespace std;

void sortArray(int arr[],int n)
{
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    cout<<arr[i];
}
    
int main()
{
    int arr[8]={3,4,1,8,9,7,5,2};
    sortArray(arr,8);
    return 0;
}
