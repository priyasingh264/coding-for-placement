#include<bits/stdc++.h>
using namespace std;
void findDuplicacyInArray(int arr[],int n)
{
    sort(arr,arr+n);
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            cout<<"duplicate elments are "<<arr[i]<<"\n";
        }
    }
}      
int main()
{
    int n=7;
    int arr[7]={1,2,3,2,3,1,4};
    findDuplicacyInArray(arr,7);
    cout<<"Array after removing duplicate elements are : ";
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            cout<<arr[i]<<" ";
            i++;
        }
        else 
        {
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}
