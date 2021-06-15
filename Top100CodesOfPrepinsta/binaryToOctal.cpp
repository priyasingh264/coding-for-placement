/*
There are two approaches of converting an octal number into a binary number like

grouping the binary number into pairs of three and converting into octal.
By converting the binary number into a decimal number first and then convert that decimal number into an octal number.
We are using second approach, this approach is long but it is very easy to implement and also the chances of error are also very minimum.

Example:10110

Decimal number     =1*(2^4) + 0*(2^3) + 1*(2^2) + 1*(2^1)+0*(2^0) = 16 + 0 + 4 + 2 + 0  =  22

Octal conversion    → 22/8, Remainder = 6, Quotient = 2  ,→  2/8, Remainder = 2, Quotient = 0

i.e 10110 in binary is 26 in octal.
*/

// Binary to octal conversion

#include <bits/stdc++.h>
using namespace std;

// Function will retun octal number of given binary number

int convert(long long bin) 
{
    int oct = 0, dec = 0, i = 0;

    // converting binary to decimal
    while (bin != 0) {
        dec += (bin % 10) * pow(2, i);
        ++i;
        bin /= 10;
    }
    i = 1;

    // converting to decimal to octal
    while (dec != 0) {
        oct += (dec % 8) * i;
        dec /= 8;
        i *= 10;
    }
    return oct;
}

int main()
{
    long long bin = 11001100;
    cout<<"Given binary number is : "<<bin;
    cout<<"\n";
    cout<<"Octal number for given binary number is : "<<convert(bin);
    return 0;
}
