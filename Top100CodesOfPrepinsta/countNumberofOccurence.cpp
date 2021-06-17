#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={2,3,5,6,2,7,2,9,2};
    int n=sizeof(arr)/sizeof(int);
    cout<<"number of occurence are"<<count(arr,arr+n,2);
    return 0;
}
