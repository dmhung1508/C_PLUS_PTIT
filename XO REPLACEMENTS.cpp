#include <bits/stdc++.h>
using namespace std;
char a[101][101];
int m,n;
pair <int,int> hu[4] = {{-1,0}, {0,-1}, {0,1}, {1,0}};
void  df(int i,int j){
    a[i][j] = '*';
    for (int k = 0; k<4; k++){
        int i1= i + hu[k].first;
        int j1= j + hu[k].second;
        if (i1 >=1 && i1 <=n && j1 >=1 && j1 <=m && a[i1][j1] == 'O'){
            df(i1,j1);
        }
    }
}
int main(){
    int t;
    cin >> t;
    while (t--){
        cin >> n >> m;
        for (int i = 1; i<=n; i++){
            for (int j = 1; j<=m; j++){
                cin >> a[i][j];
            }
        }
        for (int i =1; i<=n; i++){
            if (a[i][1] == 'O') df(i,1);
            if (a[i][m] == 'O') df(i,m);
        }
        for (int j=1; j<=m; j++){
            if (a[1][j] == 'O') df(1,j);
            if (a[n][j] == 'O') df(n,j);
        }
        for (int i =1; i<=n; i++){
            for (int j =1; j<=m; j++){
                if (a[i][j] == '*') cout << 'O' << " ";
                else cout << 'X' << " ";
            }
            cout << endl;
        }
    }

}