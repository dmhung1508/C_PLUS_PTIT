#include <bits/stdc++.h>
using namespace std;
int sum(long long a){
	int lo = 0;
	while ( a>0){
		lo += a% 10;
		a = a/10;
	}
	return lo;
}
int gcd(long long a, long long b){
	if (b==0) return a;
	return gcd(b, a%b);
}
int main(){
	int t;
	cin >> t;
	while (t--){
		long long a;
		cin >> a;
		int k = 1;
		while (k ==1) {
 			if (gcd(a,sum(a)) > 1){
				k = 0;
				cout << a << endl;
			} else a++;
		}
	}
}