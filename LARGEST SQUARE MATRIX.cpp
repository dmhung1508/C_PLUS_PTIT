#include <bits/stdc++.h>
using namespace std;
int n;
char a[1001][1001];
 
void solve()
{
    int max = 0;
    int ngang[n][n], doc[n][n];
    ngang[0][0] = doc[0][0] = (a[0][0] == 'X');
 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 'O')
                ngang[i][j] = doc[i][j] = 0;
            else
            {
                ngang[i][j] = (j == 0) ? 1 : ngang[i][j - 1] + 1;
                doc[i][j] = (i == 0) ? 1 : doc[i - 1][j] + 1;
            }
        }
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = n - 1; j >= 1; j--)
        {
            int small = min(ngang[i][j], doc[i][j]);
 
            while (small > max)
            {
                if (doc[i][j - small + 1] >= small&& ngang[i - small + 1][j] >= small)
                {
                    max = small;
                }
                small--;
            }
        }
    }
    cout << max << endl;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int TC; cin >> TC;
    while(TC--){
        cin >> n;
        for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
            }
        }
        solve();
    }
    return 0;
}