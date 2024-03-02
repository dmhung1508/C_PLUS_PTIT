#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n+1];
        for (int i = 1; i <= n; i++) cin >> a[i];
        int dem =0, max = 0;
        for (int i =1; i<=n; i++){
            if (a[i] == 1) dem = 0;
                else{
                    dem = dem +1;
                    if (dem > max) max =dem;
                }
        }
        cout << max << endl;
    }
}