#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1e9 + 7;
long long cat(long long n){
    long long c[1500] = {};
    c[0] = c[1] = 1;
    for (int i = 2; i<n; i++){
        for (int j = 0; j<i; j++){
            c[i] += c[j] *c[i-j-1];
            c[i] %= MOD;
        }
    }
    return c[n/2];
}
int main(){
    long long n;
    cin >> n;
    cout << cat(n) << endl;
}