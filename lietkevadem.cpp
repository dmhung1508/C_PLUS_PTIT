#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

bool is_prime(long long n) {
    while (n > 0) {
        int d = n % 10;
        if (d != 2 && d != 3 && d != 5 && d != 7) {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main() {
    unordered_map<long long, int> count;
    vector<long long> primes;

    long long x;
    while (cin >> x) {
        if (is_prime(x)) {
            count[x]++;
            if (count[x] == 1) {
                primes.push_back(x);
            }
        }
    }

    for (long long p : primes) {
        cout << p << " " << count[p] << endl;
    }

    return 0;
}