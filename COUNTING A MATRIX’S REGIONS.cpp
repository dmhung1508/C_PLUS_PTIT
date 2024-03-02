#include <bits/stdc++.h>
using namespace std;
int x[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int y[8] = {-1,0,1,-1,1,-1,0,1};
int a[101][101];
int n,m;
void dq(int i, int j){
    a[i][j] = 0;
    for (int k=0; k<8; k++){
        int i1 = i + x[k];
        int j1 = j + y[k];
        if (i1 >=0 && i1 <n && j1 >=0 && j1 <m && a[i1][j1] ==1){
            dq(i1,j1);
        }
    }
}
int main(){
    int t;
    cin >> t;
    while (t--){
        cin >> n >> m;
        for (int i=0; i<n; i++){
            for (int j=0; j<m; j++){
                cin >> a[i][j];
            }
        }
        int dem = 0;
        for (int i=0; i<n; i++){
            for (int j=0; j<m; j++){
                if (a[i][j] == 1){
                    dem++;
                    dq(i,j);
                }
            }
        }
        cout << dem << endl;
    }
}