#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n,m;
        cin >> n >> m;
        int a[n+1];
        multiset <int> q;
        for (int i =1; i<=m; i++) {
            cin >> a[i];
            q.insert(a[i]);
        }
        cout << *q.rbegin() << " ";
        for (int i = m+1; i<=n; i++){
            cin >> a[i];
            q.erase(q.find(a[i-m]));
            q.insert(a[i]);
            cout << *q.rbegin() << " ";
        }
        cout << endl;   
    }
}