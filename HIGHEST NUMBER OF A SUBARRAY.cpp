#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        multiset<int> s;
        for (int i = 0; i < m; i++) {
           '' s.insert(a[i]);
        }
        cout << *s.rbegin() << " ";
        for (int i = m; i < n; i++) {
            s.erase(s.find(a[i-m]));
            s.insert(a[i]);
            cout << *s.rbegin() << " ";
        }
        cout << endl;
    }
    return 0;
}
