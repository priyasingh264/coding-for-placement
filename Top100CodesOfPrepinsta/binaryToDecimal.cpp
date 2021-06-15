
//convert binary to Decimal

#include<bits/stdc++.h>
using namespace std;

int  BinaryToDecimal(int n)
{
    int rem,sum=0,i=0;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+pow(2,i)*rem;
        i++;
        n=n/10;
        
    }
    return sum;
}
int main()
{ 
    int n=1001;
    cout<<"Given Binary To Decimal number is : "<<n<<"\n";
    cout<<"Dicimal Equivalent is : "<<BinaryToDecimal(n);
    return 0;
}
