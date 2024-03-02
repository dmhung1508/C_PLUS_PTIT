#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n,m;
		cin >> n >> m;
		int a[n+1][m+1];
		int max = 0;
		memset(a,0,sizeof(a));
		for (int i =1; i<=n; i++){
		for (int j =1; j<=m; j++) {
			cin >> a[i][j];
			if (a[i][j] == 1 && i > 1 && j> 1){
				a[i][j] = min(a[i-1][j-1], min(a[i][j-1], a[i-1][j])) +1;
				if (a[i][j] > max) max =a[i][j];
			}
		}
		}
		cout << max << endl;
	}
}