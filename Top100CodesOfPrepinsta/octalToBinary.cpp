
//convert octal to binary

#include<bits/stdc++.h>
using namespace std;

void octalToBinary(int n)
{
    // octal to decimal
    int rem,sum=0,i=0;
    while(n!=0)
    {
        rem=n%10;
        sum=sum + pow(8,i)*rem;
        i++;
        n=n/10;
    }
    
    // sum -> decimal value
    cout<<"Decimal Number is : "<<sum<<"\n";
    
    // Decimal to binary
    stack<int> ch;
    while(sum!=0)
    {
        rem=sum%2;
        ch.push(rem);
        sum=sum/2;
    }
    cout<<"Equivalent binary of given octal number is : ";
    while(!(ch.empty()))
    {
        cout<<ch.top();
        ch.pop();
    }
}
    

int main()
{ 
    int n=17;
    cout<<"Given Octal number is : "<<n<<"\n";
    octalToBinary(n);
    return 0;
}
