#include<bits/stdc++.h>
using namespace std;
int main()
{
int n=6;
int arr[]={3,5,3,6,2,5};
int count = 0;
sort(arr,arr+n);
for(int i=0;i<n;i++)
{
    if(arr[i]==arr[i+1])
    {
        count++;
        cout<<"duplicate elments are "<<arr[i]<<"\n";
    }
}
 if(count==0)
    cout<<"no duplicate found";
return 0;
}
