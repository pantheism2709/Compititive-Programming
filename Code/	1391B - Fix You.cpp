// Dont know why is it not compiling .... so thats why im keeping my code here 

// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;



int main() {
   int t;
   cin>>t;
   
   while(t--)
   {
       int n;
       cin>>n;
       
       int m;
       cin>>m;
       
       int ans=0;
      
      vector<string> v;
      
      for(int i=0;i<n;i++)
      {
          string s;
          cin>>s;
          
          v.push_back(s);
      }
      
      
          for(int i=0;i<n;i++)
          {
              if(v[i][m-1]=='R')
              ans++;
          }
           for(int j=0;j<m;j++)
          {
              if(v[n-1][j]=='D')
              ans++;
          }
    
    
      cout<<ans<<endl;
      
      
   }

    return 0;
}



/*

4
3 3
RRD
DDR
RRC
1 4
DDDC
6 9
RDDDDDRRR
RRDDRRDDD
RRDRDRRDR
DDDDRDDRR
DRRDRDDDR
DDRDRRDDC
1 1
C



*/