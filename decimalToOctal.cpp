
//convert decimal to octal

#include<bits/stdc++.h>
using namespace std;

void  decimalToOctal(int n)
{
    stack<int> ch;
    int  rem;
    while(n!=0)
    {
        rem=n%8;
        ch.push(rem);
        n=n/8;
    }
    cout<<"Octal Equivalent of given number is : ";
    while(!(ch.empty()))
   {
        cout<<ch.top();
        ch.pop();
   }
}

int main()
{ 
    int n=47;
    cout<<"Given decimal number is : "<<n<<"\n";
    decimalToOctal(n);
    return 0;
}
