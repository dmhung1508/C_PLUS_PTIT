#include <iostream>
#include <string>
using namespace std;

bool check(string n) {
    int odd = 0, even = 0;
    for (int i = 0; i < n.size(); i++) {
        if (i % 2 == 0) {
            even += n[i] - '0';
        } else {
            odd += n[i] - '0';
        }
    }
    int diff = abs(odd - even);
    return diff % 11 == 0;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        if (check(n)) {
            cout << "1\n";
        } else {
            cout << "0\n";
        }
    }
    return 0;
}
