#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n+1][n+1];
		for (int i=1; i<=n; i++){
			for (int j =1; j<=n; j++){
				cin >> a[i][j];
				if ( i == 1 || i == n) cout << a[i][j] << " ";
					else{
						if (j == 1 || j == n) cout << a[i][j] << " ";
							else cout << " ";
					}
			}
			cout << endl;
		}
	}
}