/*

https://www.youtube.com/watch?v=vz0P_2V0y7M

why to use Binary Exponentiation instead of pow(a,b)??

In cpp for storing very large value we basically use double .. but what happens basically double store
large values but it is not so sure that it is storing very large value very accurately and pow function
return type is double , so that's why we don't actually use pow function instead we use Binary exponent 
function.

Note:
1) Int me no. 1e9 tak store ho jate he ... (1e9 = 10^9 mtlb 10 ke bad 9 zero )
2) long long me 1e18 tak kr skte he (10^18)

*/





// Recursive 

long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)       // don't get confused here, if no. is even then this condition will return zero and if block will not execute.
        return res * res * a;
    else
        return res * res;
}

// iterative 

long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)  // to check if b is odd , it is quite faster as compare to b%2
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}



// if there is some modulo given then you can do like below 

long long binpow(long long a, long long b, long long m) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}


// if a is very big around 10^18 range then below code will work

long long binpow(long long a, long long b, long long m) {
    a %= m;             // take mod of a even before calculating power
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}


/* If m is very big around 10^18 range then ... just suppose at some point a=10^18 and M allow this
bcoz M is 1e18 + 7 but now if i multiply a with 1e9 it won't allow me to do so ...even we will not
be able to multiply at that condition so we have to perform binary Multiplication in that case.

TC :- log^2N  ( log square N)
*/

long long binpow(long long a, long long b, long long m) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = binmul(res , a) % m;
        a = binmul(a , a) % m;
        b >>= 1;
    }
    return res;
}

long long binmul(long long a, long long b, long long m) {
    long long res = 0;
    while (b > 0) {
        if (b & 1)
            res = res + a % m;
        a = a + a % m;
        b >>= 1;
    }
    return res;
}


/*

when the value of b got increased ... upto 1e18 tak to humara upar ka code kam kar jayega ...
but agar b use bhi bada ho array ya string ke form me ho tab kya hoga


https://www.youtube.com/watch?v=GApcdkIe9WM   please go through this video 

*/


// if m is a prime number then you will call this function like binpow(a, b % m-1 , m);

long long binpow(long long a, long long b, long long m) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = binmul(res , a) % m;
        a = binmul(a , a) % m;
        b >>= 1;
    }
    return res;
}

// if m is not a prime number then jaha hum b ka modulus m-1 se le rahe the waha hum b ka modulus b ke 
// euler totient factor se lena hoga ... jo ki hota he number of numbers which are less than equal to m and 
// they are coprime with m means (gcd(n,m)==1) or there is some mathematical formula also there for 
// calculate the euler totient factor .




