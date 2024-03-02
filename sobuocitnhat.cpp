#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), dp(n+1, 1);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int res = 0;
        for (int i = 1; i < n; i++) {
            int tmp = 0;
            for (int j = 0; j < i; j++) {
                if (a[j] <= a[i]) {
                    tmp = max(tmp, dp[j]);
                }
            }
            dp[i] += tmp;
            res = max(res, dp[i]);
        }
        int ans = n - res;
        cout << ans << endl;
    }
    return 0;
}
