//convert decimal to binary

#include<bits/stdc++.h>
using namespace std;

void  decimalToBinary(int n)
{
    int rem;
    stack<int> ch;
    while(n!=0)
    {
      rem=n%2;
      ch.push(rem);
      n=n/2;
    }
    cout<<"\nBinary output of given number is = ";
    while (!ch.empty())
    {
      cout<<ch.top();
      ch.pop();
    }
}
int main()
{
    int n = 43;
    cout<<"Given Decimal number is = "<<n;
    decimalToBinary(n);
    return 0;
}
