#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

long long largest_prime_factor(long long n) {
    if (n <= 1) return -1;

    long long res = -1;
    while (n % 2 == 0) {
        res = 2;
        n /= 2;
    }

    for (long long i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            res = i;
            n /= i;
        }
    }

    if (n > 2) {
        res = n;
    }

    return res;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a;
        cin >> a;
        cout << largest_prime_factor(a) << endl;
    }

    return 0;
}