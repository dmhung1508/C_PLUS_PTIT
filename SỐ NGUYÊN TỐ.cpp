#include <bits/stdc++.h>
using namespace std;
int check(long long a){
	if (a<2) return 0;
	for (int i =2; i*i <=a; i++){
		if (a%i==0) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while (t--){
		long long a;
		cin >> a;
		if (check(a)) cout << "YES" << endl;
			else cout << "NO" << endl;
	}
}