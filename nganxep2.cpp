#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> s;
    string cmd;
    while (cin >> cmd) {
        if (cmd == "PUSH") {
            int x;
            cin >> x;
            s.push(x);
        } else if (cmd == "POP") {
            if (!s.empty()) {
                s.pop();
            }
        } else if (cmd == "PRINT") {
            if (s.empty()) {
                cout << "NONE" << endl;
            } else {
                int n = s.size();
                cout << s.top();
                cout << endl;
            }
        }
    }
    return 0;
}
