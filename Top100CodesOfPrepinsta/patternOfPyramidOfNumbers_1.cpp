/******************************************************************************
                            Required Output for n = 5
                            
                                     1
                                    232
                                   34543
                                  4567654
                                 567898765
                                 
*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int n=5;
    //cin>>n;
    cout<<"\n";
    int l=1;
    int check = 0;
    for(int i =1; i<=n;i++)
    {
        l=i;
        check = 0;
        
        // logic for spacing 
        for(int k =1; k<=n-i;k++)
        {
          cout<<" ";
        }
        
        // Logic for printing the pattern
        for(int j=1; j<=2*i-1;j++)
        {
           cout<<l;
           if(l>=2*i-1 || check)
           {
               check = 1;   
               l--;
           }
           else
           {
               l++;
           }
        }
        cout<<"\n";
    }
    

    return 0;
}
