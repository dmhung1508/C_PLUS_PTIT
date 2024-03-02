#include<bits/stdc++.h>
using namespace std;
bool cmp(int a, int b) {
    return a > b;
}
int main() {
    int n;
    cin >> n;
    while(n--) {
        int k, tong = 0;
        cin >> k;
        int sumr[k] = {0};
        int sumc[k] = {0};
        for(int i = 0; i < k; i++) {
            for(int j = 0; j < k; j++) {
                int x;
                cin >> x;
                sumr[i] += x;
                sumc[j] += x;
            }
        }
        sort(sumr, sumr + k, cmp);
        sort(sumc, sumc + k, cmp);
        if(sumr[0] >= sumc[0]) {
            for(int i = 1; i < k; i++) {
                tong += sumr[0] - sumr[i];
            }
        } else {
            for(int i = 1; i < k; i++) {
                tong += sumc[0] - sumc[i];
            }
        }
        cout << tong << endl;
    }
}

