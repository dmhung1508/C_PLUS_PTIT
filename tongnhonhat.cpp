#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int k[n];
        for (int i = 0 ;i<n; i++) cin >> k[i];
        sort(k, k+n);
        long long a =0, b=0;
        for (int i = 0; i<n; i++){
            if (i%2 == 0) a = a*10 + k[i];
            else b = b*10 + k[i];
        }
        cout << a+b << endl;
    }
}