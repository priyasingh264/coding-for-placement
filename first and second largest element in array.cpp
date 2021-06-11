#include<iostream>
using namespace std;
int largest(int arr[],int n)
{
    int secondMax = arr[0];
    if (n < 2)
    {
        cout<<"2nd largest element not posssible";
        return -1;
    }
    else 
    {
     int max=arr[0];
     for(int i=1;i<n;i++)
     {
       if (max<arr[i])
       {
        max =arr[i];   
       }
     }
    for (int i =1;i<n;i++)
    {
        if (secondMax < arr[i] && arr[i]!=max)
        {
         secondMax = arr[i];
        }
    }
}
 return secondMax;
}

int main()
{
 int arr[]={29,78,87,56};
 int n=4;
 cout<<"Second Largest element is : "<<largest(arr,n);
 return 0;
}
