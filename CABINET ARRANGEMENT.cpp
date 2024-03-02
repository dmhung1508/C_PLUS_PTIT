#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n+1][n+1];
    a[1][n] = 1;
    int q = 1;
    int t = 1;
    for (int i =n-1; i>=1; i--){
        q++;
        a[1][i] = q;
        t = 1;
        for (int j = i+1; j<=n; j++){
            q++;
            t++;
            a[t][j] = q; 

        } 
    }
    for (int i = 2; i<=n; i++){
        q++;
        a[i][1] = q;
        t = 1;
        for (int j = i+1; j<=n; j++){
            q++;
            t++;
            a[j][t] = q;
        }
    }
    for (int i =1; i <=n; i++){
        for (int j=1; j<=n; j++) cout << a[i][j] << " ";
        cout << endl;
    }
}