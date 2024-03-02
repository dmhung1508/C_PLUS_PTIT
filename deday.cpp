#include <bits/stdc++.h>
using namespace std;

const long long mod = 123456789;

long long powerOfTwo(long long n) {
    long long two = 2;
    long long sum = 1;
    while (n > 0) {
        if (n % 2 == 1) {
            sum = (sum * two) % mod;
        }
        n /= 2;
        two = (two * two) % mod;
    }
    return sum;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << powerOfTwo(n - 1) << endl;
    }
    return 0;
}
