#include <bits/stdc++.h>
using namespace std;
string diff(string a, string b) {
    int l1 = a.size(), l2 = b.size();
    int x = 0;
    char c[l1];
    for (int i = 0; i < l1; i++) {
        int d = 0;
        if (l2 - 1 - i >= 0) {
            d = a[l1 - 1 - i] - b[l2 - 1 - i] - x;
        } else {
            d = a[l1 - 1 - i] - '0' - x;
        }
        x = 0;
        if (d < 0) {
            d = d + 10;
            x = 1;
        }
        c[l1 - 1 - i] = '0' + d;
    }
    string temp;
    int i = 0;
    for (; i < l1; i++) {
        if (c[i] != '0') {
            break;
        }
    }
    for (; i < l1; i++) {
        temp += c[i];
    }
    return temp;
}
bool cmp(string a, string b) {
    int n = a.size(), m = b.size();
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == '0') {
            n--;
        } else {
            break;
        }
    }
    for (int i = 0; i < b.size(); i++) {
        if (b[i] == '0') {
            m--;
        } else {
            break;
        }
    }
    if (n > m) {
        return 1;
    }
    string c, d;
    for (int i = 0; i < n; i++) {
        c += a[a.size() - n + i];
    }
    for (int i = 0; i < m; i++) {
        d += b[b.size() - m + i];
    }
    if (n == m && c >= d) {
        return 1;
    }
    return 0;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        string ans;
        int n = a.size() - b.size();
        for (int i = n; i >= 0; i--) {
            string temp = b;
            for (int j = 0; j < i; j++) {
                temp += '0';
            }
            int sum = 0;
            while (cmp(a, temp)) {
                a = diff(a, temp);
                sum++;
            }
            if (ans.size() == 0 && sum == 0) {
                continue;
            }
            ans += sum + '0';
        }
        if (ans.size() == 0) {
            ans += '0';
        }
        cout << ans << endl;
    }
    return 0;
}