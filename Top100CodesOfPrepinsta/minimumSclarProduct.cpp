/*
Minimum scalar product of two vector
In this section we learn about the minimum scalar product of two array.

There are we have a two array That is array 1 and array 2  so here we need to find the dot product of the two array.
Dot product is also known as the scalar product of two vector.

For finding the minimum scalar product of arrays we need to multiply the minimum value of array to the maximum value of the array 
and add these all multiple value. 
So here we need to sort the array1 and array2 in ascending order and descending order respectively.

*/

#include<bits/stdc++.h>
using namespace std;


int  findMinimumScalarOfTwoVector(int arr1[],int arr2[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
            sum=sum+arr1[i]*arr2[i];
        
    }
    return sum;
}
int main()
{
    int n=4;
    int arr1[n]={2,3,5,7};
    sort(arr1,arr1+n);
    int arr2[n]={5,2,1,1};
    sort(arr2,arr2+n,greater<>());
    cout<<"sum are "<<findMinimumScalarOfTwoVector(arr1,arr2,n);
        
    return 0;
}
