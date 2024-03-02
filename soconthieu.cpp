#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long sum = 0;
        sum = n*(n+1) / 2;
        int a[n - 1];
        for (int i = 0; i < n - 1; i++) {
            cin >> a[i];
            sum -= a[i];
        }
        cout << sum << endl;
    }
    return 0;
}
