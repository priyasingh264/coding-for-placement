#include<bits/stdc++.h>
using namespace std;

int smallestElement(int arr[],int n)
{
    if(n<2)
      return -1;
    
    
    for(int i=0;i<n;i++)
    {
        sort(arr,arr+n);
    }
    return arr[1];
}
int main()
{
    
int arr[5]={8,3,4,5,6};
cout<<"second smallest element is  "<<smallestElement(arr,5);
return 0;
}
