#include <bits/stdc++.h>
using namespace std;
int cs(long long a){
	int sum = 0;
	while (a >0){
		sum += a % 10;
		a= a/10;
	}
	return sum;
}
int check(int a){
	if (a <2) return 0;
	for (int i=2; i*i <=a; i++){
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
		if (check(cs(a)) == 1) cout << a << endl;
			else cout << "-1" << endl;
	}
}