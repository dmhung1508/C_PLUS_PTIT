#include <bits/stdc++.h>
using namespace std;
long long uc(long long a, long long b){
	if ( b== 0 ) return a;
	return uc(b, a%b);
}
void rgon(long long &a, long long &b){
	long long k = uc(a,b);
	a = a/k;
	b = b/k;
}
int main(){
	long long a,b;
	cin >> a >> b;
	rgon(a,b);
	cout << a << "/" << b;
}
