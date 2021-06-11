/*

Program to reverse an array using stack

*/

#include <iostream>
#include<stack>
using namespace std;
void reverseOfArray(int arr[],int n)
{
    stack<int> s;
    for(int i=0;i<n;i++) {
        s.push(arr[i]);
    }
    
    cout<<"Reverse of the array is : ";
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}

int main()
{
   int arr[]={1,2,3,4,5};
   int n=sizeof(arr)/sizeof(int);
   cout<<"Actual array is : ";
   for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
   }
   cout<<"\n";
   reverseOfArray(arr,n);
   return 0;
}
   
