#include <bits/stdc++.h>
using namespace std;
int n;
char a[100][100];
void solve(){
    int max = 0;
    int ngang[n][n], doc[n][n];
    memset(ngang,0,sizeof(ngang));
    memset(ngang,0,sizeof(doc));
    ngang[0][0] = doc[0][0] = (a[0][0] == 'X');
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (a[i][j] == 'X'){
              
                    ngang[i][j] = (j==0) ? 1: ngang[i][j-1]+1;
                    doc[i][j] = (i==0)  ? 1: doc[i-1][j]+1;
                
            } else{
                ngang[i][j] = doc[i][j] = 0;
            }
        }
    }
    for (int i =n-1; i>= 0; i--){
        for (int j = n-1; j>=1; j--){
            int min1 = min(doc[i][j], ngang[i][j]);
            while (min1 > max){
                if (doc[i][j- min1+1] >= min1 && ngang[i-min1+1][j] >= min1){
                    max = min1;
                }
                min1--;
            }
        }
    }

    cout << max << endl;   
}

int main(){
    int t;
    cin >> t;
    while (t--){
        cin >> n;
        
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                cin >> a[i][j];
            }
        }
        solve();
    }
}