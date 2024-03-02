#include<bits/stdc++.h>
using namespace std;

long long uc(long long a, long long b){
	if (b == 0) return a;
	return uc(b, a%b);
}
int main(){
	int t;
	cin >> t;
	while (t--){
		long long a,x,y;
		cin >> a >> x >>y;
		long long c = uc(x,y);
		for (int i =1; i<=c; i++) cout<< a;
		cout << endl;
	}
}