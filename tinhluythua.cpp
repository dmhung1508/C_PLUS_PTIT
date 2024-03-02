#include <bits/stdc++.h>
using namespace std;
const long long mod = 1000000007;
long long lt(long long a, long long b){
    if (a != 0 && b == 0) return 1;
    long long k = 1;
    while (1){
        if (b == 1 || b == 0) return (a % mod * k % mod) % mod;
        if (b % 2 == 0){
            a = ( (a%mod) * (a%mod) ) % mod;
            b /= 2; 
        } else {
            k = ( (k%mod) * (a % mod) ) % mod;
            b-=1;
        }
    }
}
int main(){
    long long a,b;
    while (cin >> a >> b){
        if (a== 0 && b == 0) break;
        cout << lt(a,b) << endl;
    }
}