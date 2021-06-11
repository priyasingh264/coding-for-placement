#include<bits/stdc++.h>
using namespace std;

void kth(int arr[],int n,int k)
{
    if (n>=k) 
    {
      sort(arr,arr+n);
      cout<<k<<" th largest element in the array is : "<<arr[n-k];
    } 
    else 
    {
        cout<<k<<"th largest element is not possible";
    }
}

int main()
{
int arr[]={67,9,12,324};
int n=sizeof(arr)/sizeof(int);
int k=9;
cout<<"k is :"<<k<<"\n";
kth(arr,n,k);
return 0;
}
