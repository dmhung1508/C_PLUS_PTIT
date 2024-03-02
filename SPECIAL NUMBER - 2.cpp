#include <bits/stdc++.h>
using namespace std;
const long long mod = 1000000007;
int main(){
    int t;
    cin >> t;
    while (t--){
        long long n,m,res = 0;
        cin >> n >> m;
        long long c = 1;
        while (m >0){
            if ( m % 2 == 1){
                res += c;
                res %= mod;
            }
            c = c*n;
            c %= mod;
            m /= 2;
        }
        cout << res << endl;
    }
}