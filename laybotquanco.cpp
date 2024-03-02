#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int c,m;
        cin >> c >> m;
        if (c == 0 ){
            cout << "Second" << endl;
            continue;
        }
        if (c <= m){
            cout << "First" << endl;
            continue;
        }
        if ( c% (m+1) == 0) cout << "Second" << endl;
        else cout << "First" << endl;
    }
}