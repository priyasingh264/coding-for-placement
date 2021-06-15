
//find the quadrant in which coordinate lies

#include<bits/stdc++.h>
using namespace std;
void quadrant(int x,int y)
{
    if(x>0 && y>0)
    {
        cout<<"("<<x<<" , "<<y<<" ) lies in fisrt quadrant \n";
    }
    if(x<0 && y>0)
    {
         cout<<"("<<x<<" , "<<y<<" ) lies in second quadrant \n";
    }
    if(x<0 && y<0)
    {
         cout<<"("<<x<<" , "<<y<<" ) lies in third quadrant \n";
    }
    if(x>0 && y<0)
    {
         cout<<"("<<x<<" , "<<y<<" ) lies in fourth quadrant \n";
    }
    if(x==0 && y==0)
    {
         cout<<"("<<x<<" , "<<y<<" ) lies in origin \n";
    }
    if(x>0 && y==0)
    {
         cout<<"("<<x<<" , "<<y<<" ) lies in positive x-axis \n";
    }
    if(x==0 && y>0)
    {
         cout<<"("<<x<<" , "<<y<<" ) lies in +ve y-axis \n";
    }
    if(x<0 && y==0)
    {
         cout<<"("<<x<<" , "<<y<<" ) lies in -ve x-axis \n";
    }
    if(x==0 && y<0)
    {
         cout<<"("<<x<<" , "<<y<<" ) lies in -ve y-axis \n";
    }
    
}
    

int main()
{ 
    quadrant(21,11);
    quadrant(-12,11);
    quadrant(-14,-16);
    quadrant(21,-11);
    quadrant(0,0);
    quadrant(12,0);
    quadrant(-11,0);
    quadrant(0,11);
    quadrant(0,-11);
    return 0;
}
