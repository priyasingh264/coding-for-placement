#include<bits/stdc++.h>
using namespace std;

bool pallindrome(int n)
{
    int rem,reverse=0,temp=n;
    while(n!=0)
    {
        rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;
    }
    if(temp==reverse)
        return true;
    else
    return false;
}

int main()
{
    int arr[4]={121,3333,1441,132};
    int largest = 0;
    cout<<"The palindrome number in the array are : ";
    for(int i=0;i<4;i++)
    {
     if(pallindrome(arr[i]))
     {
         cout<<arr[i]<<" ";
         if (arr[i]>largest)
         {
             largest = arr[i];
         }
     }
    }
    cout<<"\n";
    
    if (largest == 0)
    {
        cout<<"No palindrome found in the array \n";
    }
    else
    {
        cout<<"Longest palindrome in array is : "<<largest;
    }
    
    
    return 0;
}
