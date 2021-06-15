
//convert octal to Decimal

#include<bits/stdc++.h>
using namespace std;

void binaryToOctal(int n)
{
    // binary to decimal
    int rem,sum=0,i=0;
    while(n!=0)
    {
        rem=n%10;
        sum=sum + pow(2,i)*rem;
        i++;
        n=n/10;
    }
    
    // sum -> decimal value
    cout<<"Decimal Number is : "<<sum<<"\n";
    
    // Decimal to octal
    stack<int> ch;
    while(sum!=0)
    {
        rem=sum%8;
        ch.push(rem);
        sum=sum/8;
    }
    cout<<"Equivalent Octal of given binaryy number is : ";
    while(!(ch.empty()))
    {
        cout<<ch.top();
        ch.pop();
    }
}
    

int main()
{ 
    int n=1111;
    cout<<"Given binary number is : "<<n<<"\n";
    binaryToOctal(n);
    return 0;
}
