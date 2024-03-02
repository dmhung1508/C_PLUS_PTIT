#include <bits/stdc++.h>
using namespace std;

void hoanvi(int a[], int n, bool &s) {
    int i = n - 2;
    while (i >= 0 && a[i] >= a[i+1]) {
        i--;
    }
    if (i < 0) {
        s = false;
    } else {
        int j = n - 1;
        while (j > i && a[j] <= a[i]) {
            j--;
        }
        swap(a[i], a[j]);
        reverse(a+i+1, a+n);
        s = true;
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a+n);
    bool s = true;
    while (s) {
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        hoanvi(a, n, s);
    }
    return 0;
}

