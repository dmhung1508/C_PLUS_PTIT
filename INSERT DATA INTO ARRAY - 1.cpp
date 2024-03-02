#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin >>n >> m;
	int a[n+1], b[m+1];
	for (int i =1; i<=n; i++) cin >> a[i];
	for (int i=1; i<=m; i++) cin >> b[i];
	int k;
	cin >> k;
	for (int i =1; i<=n; i++){
		if (i==k){
			cout << a[i] <<" ";
			for (int j=1; j<=m; j++) cout << b[j] << " ";
		} else cout << a[i] << " ";
	}
}