#include <bits/stdc++.h>
using namespace std;
int check(string a, string b, string c){
	int x = a.size(), y = b.size(), z= c.size();
	int q[x+1][y+1][z+1];
	memset(q,0,sizeof(q));
	for (int i =1; i<=x; i++){
		for (int j=1; j<= y; j++){
			for (int k = 1; k <= z; k++){
				if (a[i-1] ==  b[j-1] && b[j-1] == c[k-1]){
					q[i][j][k] = q[i-1][j-1][k-1] +1;
				} else{
					q[i][j][k] = max(q[i-1][j][k],q[i][j-1][k],q[i][j][k-1]);
				}
			}
		}
	}
	return q[x][y][z];
}
int main(){
	int t;
	cin >> t;
	while (t--){
		int m,n,p;
		cin >> m >> n >> p;
		string a,b,c;
		cin >> a >> b >> c;
		cout << check(a,b,c) << endl;
	}
}