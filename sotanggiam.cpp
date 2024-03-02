#include <bits/stdc++.h>
using namespace std;
int tang(string a){
	for (int i =1; i< a.size(); i++){
		if (a[i] < a[i-1]) return 0;
	}
	return 1;
}
int giam(string a){
	for (int i =1; i< a.size(); i++){
		if (a[i] > a[i-1]) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while (t--){
		string a;
		cin >> a;
		if (tang(a) || giam(a)) cout << "YES" << endl;
			else cout << "NO" << endl;
	}
}