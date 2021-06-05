#include<iostream>
using namespace std;

void output(int a[], int n) {
 for(int i=0;i<n;i++)
 {
     cout<<a[i]<<" ";
 }
 cout<<"\n";
}
void insertAtBegining(int a[],int n,int k)

{

    for(int i=n-1;i>=0;i--)
    {
       a[i+1]=a[i];
    }
a[0]=k;
}

void insertEnd(int b[],int n,int k)
{
    b[n-1]=k;
}
void insertMiddle(int c[],int n,int k,int h)
{
    for(int i = n-1; i>=h;i--)
    {
        c[i+1] = c[i];
    }
    c[h]=k;
}


int main()
{
 int n=7,k=9,h=3;
 int a[n] = {1,2,3,4,5,6};
 output(a,n);
 insertAtBegining(a,n,k);
 output(a,n);

 int b[n]={1,2,3,4,5,6};
 insertEnd(b,n,k);
 output(b,n);
 
 int c[n]={1,2,3,4,5,6};
 insertMiddle(c,n,k,h);
 output(c,n);

 insertionAtEnd(a,n,k);
 output(a,n,k); */

 return 0;
}
