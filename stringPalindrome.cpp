/* 
C++ Program to check if string is palindrome or not
Palidrome means reversing the alphabets of the word forms the same word
*/


#include <iostream>
using namespace std;

void palindrome(string a, int n) 
{
    string b;
    int j=0;
    for (int i=n-1;i>=0;i--) {
        b = b +a[i];
    }
    
    cout<<"Actual String is : "<<a<<"\n";
    cout<<"Reverse String is : "<<b<<"\n";
    
    if (a==b) {
        cout<<"String "<<a<<" is palindrome\n";
    }
    else {
        cout<<"String "<<a<<" is not a palindrome";
    }
}


int main()
{
    string a =  "PRIYA";
    int n = a.length();
    palindrome(a,n);
    return 0;
}
