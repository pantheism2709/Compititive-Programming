/*

GCD :- Greatest Common Divisor or HCF (Highest Common Factor)

ex:- gcd(18,8)= 2;

if(gcd(a,b)==1) then a,b are coprime to each other

Properties of gcd:
1) gcd(a,b) = gcd(a,b-a)  //where b-a must be greater than zero, so we bascially subtract a from b untill b is positive

so basically ,

    gcd(a,b) = gcd(a, b % a);  // so b here is considered as larger number and a is smaller and we will do this untill one of the a or b
                                // become zero.


*/

// TC : O(log(max(a , b)))

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(a==0)
    {
        return b;
    }
    
    return gcd(b%a,a);
}
int main() {
    int a,b;
    cin>>a>>b;
    
    cout<<gcd(a,b)<<endl;
    
    return 0;
}


// Although you not need to write the above code if you are cpp
// user as cpp has __gcd(a,b) function in its standard template library ..
// You can directly use from there. it also has same TC.

