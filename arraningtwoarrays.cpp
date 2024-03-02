#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    while (t--){
        int n,m;
        cin >> n >> m;
        int a[n+1],b[m+1];
        multiset <int> q;
        for (int i =1; i<=n; i++){
            cin >> a[i];
            q.insert(a[i]);
        }
        for (int i =1; i<=m; i++){
            cin >> b[i];
            int k = q.count(b[i]);
            for (int p=1; p<=k; p++){
                q.erase(q.find(b[i]));
                cout << b[i] << " ";
            }
        }
        for (auto x:q){
                cout << x << " ";
            }
        cout << endl;
    }
}