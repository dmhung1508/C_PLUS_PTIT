#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        long long sum = a[n-1], reus = 1;
        for (int i = n-2; i >= 0; i--) {
            reus = (reus * x) % MOD;
            sum = (sum + (a[i] * reus) % MOD) % MOD;
        }
        cout << sum << endl;
    }
    return 0;
}

