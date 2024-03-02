#include <bits/stdc++.h>
using namespace std;
int check(string a){
	int n = a.size();
	bool f[n+1][n+1];
	memset(f,false, sizeof(f));
	for (int i =1; i<=n; i++) f[i][i] = true;
	int max = 1;
	a = '@' + a;
	for (int len = 2; len <=n; len ++){
		for (int i=1; i<=n-len+1; i++){
			int j = i+len-1;
			if (len == 2 && a[i] == a[j]) f[i][j] = true;
				else{
					f[i][j] = f[i+1][j-1] && (a[i] == a[j]);
				}
			if (f[i][j]) max =len;
		}
	}
	return max;
}
int main(){
	int t;
	cin >> t;
	string a;
	while (t--){
		cin >> a;
		cout << check(a) << endl;
	}
}