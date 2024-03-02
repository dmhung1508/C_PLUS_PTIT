#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> s;
    string cmd;
    while (cin >> cmd) {
        if (cmd == "push") {
            int x;
            cin >> x;
            s.push(x);
        } else if (cmd == "pop") {
            if (!s.empty()) {
                s.pop();
            }
        } else if (cmd == "show") {
            if (s.empty()) {
                cout << "empty" << endl;
            } else {
                int n = s.size();
                vector<int> v(n);
                for (int i = 0; i < n; i++) {
                    v[i] = s.top();
                    s.pop();
                }
                for (int i = n - 1; i >= 0; i--) {
                    cout << v[i] << " ";
                    s.push(v[i]);
                }
                cout << endl;
            }
        }
    }
    return 0;
}

