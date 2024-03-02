#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1000000007;
ll power(ll a,ll b,ll mod){
    if(b == 0) return 1ll;
    ll cur = power(a,b / 2,mod);
    if(b & 1 ){
        return ((cur * cur) % mod * a) % mod;
    }
    else return (cur * cur) % mod;
}
vector<int> b_s(ll n){
    vector<int> res;
    while(n){
        res.push_back(n % 2);
        n /= 2;
    }
    return res;
}
void solve(){
    ll a,k; cin >> a >> k;
    vector<int> ans = b_s(k);
    ll res = 0;
    for(int i = 0 ; i < ans.size(); ++i){
        if(ans[i]) res = (res + power(a,i,mod)) % mod;
    }
    cout << res << '\n';
}
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}