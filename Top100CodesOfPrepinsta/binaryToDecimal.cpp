/*
The concept of converting a binary number to a decimal number is very simple , extract the digits of the binary number (start from right for convenience )and multiply the digits with the proper base(power of 2) lastly add each of the results and we will get a converted number as an output.

Example: 10101

Decimal number = 1*(2^4)+ 0*(2^3) + 1*(2^2) + 0*(2^1) + 1*(2^0)=16 + 0 + 4 +0+1

        = 21
*/

// Binary to decimal conversion

#include <bits/stdc++.h>
using namespace std;

// Function will retun decimal number of given binary number
int binaryToDecimal(int arr[],int n)
{
    int sum =0,j=0;
    for(int i =n-1; i>=0; i--)
    {
        sum = sum + arr[i]*pow(8,j);
        j++;
    }
    return sum;
}

int main()
{
    int binary[]={1,0,1};
    int n = sizeof(binary)/sizeof(int);
    
    cout<<"Given binary number is : ";
    for(int i=0 ; i<n ; i++)
    
    cout<<binary[i];
    cout<<"\n";
    cout<<"Decimal number for given binary number is : "<<binaryToDecimal(binary,n);
    return 0;
}
