
//convert octal to Decimal

#include<bits/stdc++.h>
using namespace std;

int octalToDecimal(int n)
{
    int rem,sum=0,i=0;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+pow(8,i)*rem;
        i++;
        n=n/10;
    }
    return sum;
}

int main()
{ 
    int n=12;
    cout<<"Given decimal number is : "<<n<<"\n";
    cout<<"Equivalent octal number is : "<<octalToDecimal(n);
    return 0;
}
