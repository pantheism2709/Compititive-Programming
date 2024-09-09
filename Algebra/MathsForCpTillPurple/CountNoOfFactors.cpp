//https://www.youtube.com/watch?v=tDM6lT-qjys

// count number of factors/divsiors .....divisor vo hota he jis
// se hum divide krte he dividend vo hota he jisko hum divide krte he
// quotient vo hota jo divide krne pe ata ... remainder is remainder 🙂

// TC:- O(sqrt(N))

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int cnt = 0;
                  
    for(int i=1; i*i<=n;i++){
        if(n%i==0)   
        {
           cnt++;  // i is a factor 

           if(i != n/i)
            cnt++;  // then (n/i) is also a factor 
        }
    }
    
    cout<<cnt;

    return 0;
}



// count number of factors for all number till n
// in optimal way ... the above algo take something
// near O(n*sqrt(n)) which is quite more so we'll see
// some more optimal way

// Instead of traversing on each multiple because here we are waisting some iteration where number is not 
// factor of dividend ... we wil traverse on multiple like ... if we are at 7 then 7 will be the divisor
// for 14,21,28,35 ...etc. so we will increase the cntFactor of 7's multiples 

// TC is less than O(n*log(n)) and O(n*log(n)) <<<<<< O(n*sqrt(n))
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;
   
   vector<int>cntFactor(n+1);
                  
    for(int i=1; i<=n;i++){
     for(int j=i;j<=n;j+=i)
     {
         cntFactor[j]++;  // i is a divisor / factor of j
     }
    }
  
 for(int i=1;i<=n;i++)
  {
      cout<<cntFactor[i]<<endl;
  }

    return 0;
}