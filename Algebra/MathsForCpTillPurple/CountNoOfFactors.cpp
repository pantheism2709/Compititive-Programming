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