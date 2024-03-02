#include <iostream>
#include <cmath>
using namespace std;

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int sumOfPrimeFactors(int n) {
    int sum = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        while (n % i == 0) {
            sum += sumOfDigits(i);
            n /= i;
        }
    }
    if (n > 1) {
        sum += sumOfDigits(n);
    }
    return sum;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (sumOfDigits(n) == sumOfPrimeFactors(n)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
