#include<bits/stdc++.h>
using namespace std;
void countFrequency(int arr[],int n)
{
    map<int,int>v;
    for(int i=0;i<n;i++)
    {
      v[arr[i]]++;
    }
    for(auto x:v)
    {
 //       cout<<"Frequency of the " <<x.first<<" is : "<<x.second<<"\n";
     if(x.second>1)
     {
         cout<<x.first <<" is duplicate\n";
     }
    }
}

int main()
{
    int arr[]={7,9,3,7,3,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    countFrequency(arr,n);
    return 0;
}
