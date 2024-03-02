#include <bits/stdc++.h>

using namespace std;
int check(int a[], int n, int k) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] <= k) count++;
    }
    int cnt=0;
    for (int i = 0; i < count; i++) {
        if (a[i] > k) cnt++;
    }
    int doi = cnt;
    for (int i =0, j = count; j<n; i++, j++){
        if (a[i] >k) cnt--;
        if (a[j] >k)    cnt++;
        doi = min(doi, cnt);
    }
    return doi;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int cnt = 0;
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cnt = check(a, n, k);


        cout << cnt << endl;
    }
    return 0;
}
