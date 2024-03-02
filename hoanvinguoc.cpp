#include <bits/stdc++.h>
using namespace std;

void hoanvi(int a[], int n, bool& ok) {
    int i = n - 2;
    while (i >= 0 && a[i] < a[i + 1]) i--;
    if (i == -1) ok = false;
    else {
        int j = n - 1;
        while (a[j] > a[i]) j--;
        swap(a[i], a[j]);
        int l = i + 1, r = n - 1;
        while (l < r) {
            swap(a[l], a[r]);
            l++; r--;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) a[i] = n - i;

        bool ok = true;
        while (ok) {
            for (int i = 0; i < n; i++) cout << a[i];
            cout << " ";

            hoanvi(a, n, ok);
        }
        cout << endl;
    }

    return 0;
}


