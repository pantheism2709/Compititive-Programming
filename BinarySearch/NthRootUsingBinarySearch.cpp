/*

Its not so intutive but we can find nth root of any number using binary search

why and how ..?

the nth root of any number X will be in range 1.....x and this range is monotonic
so thats why we can find it using binary search also the number of elements in this range
will be depend on number of precision you are considering

if I want the accuracy of nth root would be up to one decimal place
then search space would be 1,1.1,1.2,1.3,1.4,1.5,1.6.....2.0,2.1,2.2,2.3,2.4...

https://www.youtube.com/watch?v=5snE6xsyheE&list=PLauivoElc3gjE_s-7owHO0RVb_jj7Rx85&index=3

*/

#include<bits/stdc++.h>
using namespace std;

double eps = 1e-6;  // up to which place you want decimal

double multiply(double mid, int n){
    double ans =1;
    for(int i=1;i<n;i++){
        ans*=mid;
    }
    return ans;
}

int main(){

    double x;
    int n;
    cin>>x>>n;

    double lo=1,hi=x,mid;
    while(hi-lo>eps){

    mid = (hi+lo)/2;

    if(multiply(mid,n)<x){
        lo=mid;
    }else
    {
        hi = mid;
    }

    }

    cout<< lo <<endl; // yaha lo ya hi kuch bhi print kar skte ho
                      // tumne jitne decimal tak accuracy chahiye wha
                      // tak lo or hi ki value same hi hogi after decimal 

    cout<< setprecision(10) << lo << "\n" <<hi<<endl;

    cout<< pow(x, 1.0/n)<<endl;  // using pow function to find nth root

    return 0;
}


/*

TC:-  p*log(N*(10^d))

for pth root of number N with d decimal accuracy

*/