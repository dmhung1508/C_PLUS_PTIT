#include <bits/stdc++.h>
using namespace std;
long long tong(long long a[1000], long long b[1000], int n, int m){
    long long ma = 0,s1=0,tmp=0;;
    for (int i = 0; i< n; i++){
        s1 += a[i];
        tmp = 0;
        for( int j =i+1; j<m; j++){
            tmp += b[j];
        }
        ma = max(ma,s1+tmp);
    }
    return ma;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int m,n;
        cin >> n >> m;
        long long a[n],b[m];
        for (int i=0;i<n;i++) cin >> a[i];
        for (int i=0;i<m;i++) cin >> b[i];
        cout << max(tong(a,b,n,m), tong(b,a,m,n)) << endl;
    }
}