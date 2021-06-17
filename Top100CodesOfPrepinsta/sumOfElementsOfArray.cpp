//calculate sum of element in array
#include<bits/stdc++.h>
using namespace std;

int sumOfElement(int arr[],int n)
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
    int arr[5]={7,9,8,5,2};
    cout<<"sum of array is "<<sumOfElement(arr,5);
    return 0;
}
