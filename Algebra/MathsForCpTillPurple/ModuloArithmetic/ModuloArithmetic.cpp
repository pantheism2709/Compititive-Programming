/*

( a + b ) % m = (( a % m) + ( b % m)) % m

( a * b ) % m = ( 1LL *( a % m) * ( b % m)) % m   // mulitplying 1LL to prevent possible overflow

( a - b ) % m = (( a % m) - ( b % m) + m ) % m  // to prevent ( a % m) - ( b % m) to be less than zero we add m in it

( a ^ b ) % m = binExponentiation( a , b , m );  // ise kam ho jayega bas a or b maha bade na ho to

( a / b ) % m = ( ( a % m ) * ( multiplicative_Inverse_Of_B_Under_Modulo_M ) ) % M;


 For calulating multiplicative inverse of B under modulo m  

 1) Guarantee that multi inverse of B under modulo m exists ?
 Ans :- it will exists if gcd( B , m )==1  ... usually we don't care
 about this because the M which is given is prime most of the time that's why 
 1e9 + 7 is so famous because it is also a prime number  ... and prime numbers are
 coprime with all other number less than to them .

 2) how to find ?  one way is traverse upto number and check b * x % m ==1 but this way is slow

 another way :- multiplicative_inverse_b_under_modulo_m = ( b ^ m-2 ) % m ..... if m is prime number and it is in most of the cases
  

  and for calculate ( b ^ m-2 ) % m use binaryExponentiation for O ( log N ) time complexity ;



  Code for division is below .......... 
                                                                                        


*/


#include <bits/stdc++.h>
using namespace std;

int pw(int a,int b,int m)
{
    if(b==0)
    {
        return 1;
    }
    if(b % 2 == 0){
        int t = pw( a, b/2 , m);
        return (1ll * t * t % m);
    }
    else
    {
        int t = pw(a , (b-1)/2, m);
        t = (1ll * t * t) % m;
        return (1ll * a * t % m);
    }
    
}

int multiplicativeInverseBModM(int x, int m)
{
    return pw( x, m-2, m);  // fermat's little theroem
    
}

int main() {
    int a,b,m;
    cin>>a>>b>>m; // only if m is prime
    
    a %= m;
    
    int mulInverseB =  multiplicativeInverseBModM( b, m); 
    
    int res = a * mulInverseB % m;
    
    cout<<res<<endl;
    return 0;
}




