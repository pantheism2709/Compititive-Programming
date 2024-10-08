/*

question which shows how to leverage binary search in predicate function

https://www.youtube.com/watch?v=JAfJssvFgDI&list=PLauivoElc3gjE_s-7owHO0RVb_jj7Rx85&index=4

binary search hum lagate he monotonic predicate function pe 
lagate he

F F F T T T T
T T T T F F F

predicate unction me we ususally try to find the last false or the first true


10^5 se bade array hume globally declare karna chahiye warna segmentation fault ane ke chances hote he 

*/

#include<bits/stdc++.h>
using namespace std;
const int N 1e6+10;

int n;
long long m;
long long trees[N];

bool isWoodSufficient(int h){

    long long wood = 0;
    for(int i=0;i<n;i++){
        if(trees[i]>=h){
            wood+=(trees[i]-h);
        }
    }

    return wood>=m;

}

int main(){
    cin>>n>>m;

    for(int i=0;i<n;i++){
        cin>>trees[i];
    }

    long long lo=0, hi=1e9,mid;

    while(hi -  lo >1){

        mid=(lo+hi)/2;
        if(isWoodSufficient(mid)){
             lo=mid;
        }
        else{
            hi=mid-1;
        }

    }

    if(isWoodSufficient(hi)){
        cout<<hi<<endl;
    } 
    // T.C. :- O (N log (H))
    else
    cout<<lo<<endl;


}