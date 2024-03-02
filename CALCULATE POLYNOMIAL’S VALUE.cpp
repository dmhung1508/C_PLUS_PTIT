#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; ++i)
#define FORD(i, a, b) for(int i = a; i >= b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);

const int mod = 1e9 + 7;
int t, n, st;
ll x;
int a[2005];

int main()
{
    faster();
    cin >> t;
    while(t--)
    {
        ll ans = 0;
        cin >> n >> st;
        FORD(i, n - 1, 0) cin >> a[i];
        x = 1;
        for(int i = 0; i < n; i++)
        {
            ans += a[i] * x;
            ans %= mod;
            x *= st;
            x %= mod;
        }
        cout << ans << endl;
    }
    return 0;
}
}
