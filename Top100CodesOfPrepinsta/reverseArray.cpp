#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
        cin>>n;
        vector<int> V;
        for(int i=0;i<n;i++)
        {
             int x;
             cin>>x;
             V.push_back(x);
        }  
  reverse(V.begin(),V.end());  
  for(int i=0;i<n;i++)
  {
    cout<<V[i]<<" ";
  }    
  cout<<endl;
}
