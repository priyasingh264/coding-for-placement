#include<bits/stdc++.h>
using namespace std;


void countEvenOddInArray(int arr[],int n)
{
    vector<int>odd;
    vector<int>even;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even.push_back(arr[i]);
        }
        else
       {
            odd.push_back(arr[i]);
       }
    }
       cout<<"even numbers are : ";
       for (auto it = even.begin(); it != even.end(); ++it)
            cout << *it << " ";
            
       cout<<"\n";
        
       cout<<"odd numbers are : ";
       for (auto it = odd.begin(); it != odd.end(); ++it)
            cout << *it << " ";
    
}
int main()
{
    int arr[8]={1,2,3,4,5,6,7,8};
    countEvenOddInArray(arr,8);
    return 0;
}
