#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int count = 0;
        sort(a.begin(), a.end());
        for (int i = 1; i < n; i++) {
            if (a[i] - a[i-1] > 1) count += (a[i] - a[i-1] - 1);
        }
        cout << count << endl;
    }
    return 0;
}
