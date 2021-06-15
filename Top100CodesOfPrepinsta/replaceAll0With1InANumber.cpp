/*
 Program to replace all 0 with 1 in a given integer
*/

#include<bits/stdc++.h>
using namespace std;

void replaceAll0With1(int n)
{
   int rem;
   stack<int> num;
   while(n!=0)
   {
      rem = n%10;
      if (rem == 0)
         num.push(1);
      else
         num.push(rem);
    n=n/10;
   }
   
   cout<<"\nNumber after replacing 0 with 1 : ";
   
   while(!num.empty())
   {
       cout<<num.top();
       num.pop();
   }
}

int main()
{
  int n = 12090;
  cout<<"Number inlcuding zeroes : "<<n;
  replaceAll0With1(n);
  return 0;
}
