/*
find the sum of all elements in an array
*/

#include<iostream>
using namespace std;
int sum(int arr[],int n)
{
int sum=0;
for(int i=0;i<n;i++)
{
    sum=sum+arr[i];
}
return sum;
}
int main()
{
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(int);
    cout<<"Sum of the elements of array is : "<<sum(arr,n);
    return 0;
}
