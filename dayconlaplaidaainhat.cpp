#include <bits/stdc++.h>
using namespace std;
int check(string a){
	int n = a.size();
	int f[n+1][n+1];
	memset(f,0,sizeof(f));
	a= '@' + a;
	int max = 0;
	for (int len = 2; len <= n; len++){
		for (int i =1; i<= n-len+1; i++){
			int j = i+len-1;
			if (len == 2 && a[i] == a[j]) f[i][j] = 1;
				else{
					if (f[i-1][j-1] && a[i] == a[j]){
						f[i][j] = 1;
						
					}
				}
			if (f[i][j]) max = len;
		}
	}
	return max;
}
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		string a;
		cin >> n;
		cin >> a;
		cout << check(a) <<endl;
	}
}