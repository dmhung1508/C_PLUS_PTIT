#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		int b[100001];
		for (int i =1; i<= 100000; i++) b[i] = 0;
		cin >> n;
		int a[n+1][n+1];
		for (int i =1; i<=n; i++){
			for (int j=1; j<=n; j++){
				cin >> a[i][j];
				if (b[a[i][j]] == i-1) b[a[i][j]]++;
			}
		}
		int k = 0;
		for (int i =1; i<=n; i++){
			if (b[a[n][i]] == n){
				k++;
				b[a[n][i]] = 0;
			}
		}
		cout << k << endl;
	}
}