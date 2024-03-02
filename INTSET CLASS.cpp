#include <bits/stdc++.h>
using namespace std;
int main(){
	ifstream fin("DATA.in");
	int n,m;
	fin >> n;
	fin >> m;
	int k;
	set<int> a,b;
	for (int i =1;i <=n; i++) {
		fin >> k;
		a.insert(k);
	}
	for (int i = 1; i<=m; i++){
		fin >> k;
		if (a.find(k) != a.end()) b.insert(k);
	}
	for (auto x:b) cout << x << " ";
}