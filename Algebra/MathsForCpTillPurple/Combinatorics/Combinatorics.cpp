/*

C represent combination (selection ) ye basically hota he ki tum n items me se r items kitne combination me bana sakte ho


P permutation (arrangement) ye hota he ki n me se p items ko kitne way me arrange kar skte ho 


nCr = fact(n) / fact(r) * fact(n-r)

nPr = fact(n) / fact(n-r) 

and usually combinatorics questions comes along with modulo arithmetic so we can apply it here also ;

now for faster calculation store factorial n for each n 
and stor inverse of factorial n for each n ;

*/




int fact[N],invfact[N]; // N would be largest  possible value of N given in contraints
void init(){

    int p=PRIME;   // ye basically modulo he jo question me given hoga
    fact[0]=1;

    int i;
    for(i=1; i<N; i++){     // O(N)
        fact[i]=i*fact[i-1]%p;
    }
    i--;
    invfact[i]=pw(fact[i],p-2,p); // O(log(p))

    for(i--;i>=0;i--){     // O(N)
        invfact[i]=invfact[i+1]*(i+1)%p; // its the easy way of calulating if inverse of i+1 is previously calculated
    }


}

int ncr(int n , int r){
    if(r>n || n<0 || r<0) return 0;

    return fact[n]*invfact[r]%PRIME * invfact[n-r]%PRIME;  // O(1)
}


// overall time complexity is near about linear O(N).


