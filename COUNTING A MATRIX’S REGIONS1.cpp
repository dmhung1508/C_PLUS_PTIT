#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int m,n;
        cin >> m >> n;
        int a[m][n];
        int d[m][n];
        memset(d,0,sizeof(d));
        for (int i=0; i<m; i++){
            for (int j=0; j<n; j++){
                cin >> a[i][j];
                if (a[i][j] == 1){
                    if (a[i][j-1] == 1 && j >=0) d[i][j] =d;
                    if (a[i][j] == 1 && j >=0) d[i][j]++;
                }
            }
        }
    }
}