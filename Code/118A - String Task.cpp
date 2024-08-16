//again compiler not working of codeforces

// Online C++ compiler to run C++ program online


#include <bits/stdc++.h>
using namespace std;



int main() {
  
  string s;
  cin>>s;
  string ans;
  
  for(int i=0;i<s.size();i++)
  {
      if(s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u'||s[i]=='Y'||s[i]=='y')
      {
          
      }
      else
      {
          ans+='.';
          if(s[i]>='A'&&s[i]<='Z')
          {
              ans+=(s[i]+32);
          }
          else
          ans+=s[i];
      }
      
  }
  
  cout<<ans<<endl;

    return 0;
}