#include<iostream>
using namespace std;

int searching(int a[],int n,int h)
{
    for(int i=0;i<n;i++)
    {
        if (a[i]==h)
        {
            return i;
        }
    }
    return -1;
}

void output(int a[],int n) {
  for(int i=0;i<n;i++) {
    cout<<a[i]<<" ";
 }
 cout<<"\n";
}

int main()
{
    int h=2;
    int a[]={8,7,3,1,5,10};
    output(a,sizeof(a)/sizeof(int));
    cout<<searching(a,sizeof(a)/sizeof(int),h);
    return 0;
}

