/*

Program to write HCF and LCM of two number.
--> Used HCF * LCM = Product of two numbers

*/

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int hcf(int n1, int n2)
{
    if (n2 != 0)
       return hcf(n2, n1 % n2);
    else 
       return n1;
}

int lcm(int n1, int n2)
{
    return (n1*n2)/hcf(n1,n2);
}

int main()
{
   int n1, n2;
   cout << "Enter two positive integers: ";
   cin >> n1 >> n2;
   cout << "H.C.F of " << n1 << " & " <<  n2 << " is: " << hcf(n1, n2)<<"\n";
   cout << "L.C.M of " << n1 << " & " <<  n2 << " is: " << lcm(n1, n2)<<"\n";
   return 0;
}
