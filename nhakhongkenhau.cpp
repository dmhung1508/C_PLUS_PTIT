#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>  t;      
    while (t--){
        int n;
        cin >> n;
        int a[n+3],d[n+3];
        for (int i =1; i<=n; i++){
            cin >> a[i];
            d[i] = 0;
        }
        a[n+1] = d[n+1] = 0;
        a[0] = 0; a[-1] = 0;
        d[0] = d[-1] = 0;
        for (int i=1; i<=n+1; i++){
            d[i] = max(d[i-1], d[i-2] + a[i-1]);
        }
        cout << d[n+1] << endl;
    }
}