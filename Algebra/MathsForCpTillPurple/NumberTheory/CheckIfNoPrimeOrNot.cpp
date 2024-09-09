// Sieve of Eratosthenes


#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;
   
   vector<int>prime(n+1,1);
    // O(n log(log(n))) --> very fast --> almost linear              
    for(int i=2; i<=n;i++){
        if(!prime[i]) continue;
     for(int j=i*i;j<=n;j+=i)
     {
         prime[j] = 0;
     }
    }
  
// prime[x] stores if x is prime or not 
    return 0;
}



// need to setup the vs code for this hand have to
// have to create boiler code for this like for
// calculation prime till n