#include <bits/stdc++.h>
using namespace std;
int main(){
	multiset<int> a;
	int n;
	cin >> n;
	int k;
	for (int i =1; i<=n; i++){
		cout << "Buoc " << i-1 << ": ";
		cin >> k;
		a.insert(k);
		for (auto x:a) cout << x << " ";
		cout << endl;
	}
}
