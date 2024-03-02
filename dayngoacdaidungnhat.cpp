#include <bits/stdc++.h>
using namespace std;

int solve(string s) {
    stack<int> st;
    int res = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            st.push(i);
        } else {
            if (!st.empty() && s[st.top()] == '(') {
                st.pop();
                int len = st.empty() ? i + 1 : i - st.top();
                res = max(res, len);
            } else {
                st.push(i);
            }
        }
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }
    return 0;
}