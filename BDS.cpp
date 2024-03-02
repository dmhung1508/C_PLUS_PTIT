#include <bits/stdc++.h>
using namespace std;
int check(int a){
	while (a %2 == 0) a = a/2;
	while (a %3 == 0) a= a/3;
	return a;
}
int main(){
	int t;
	cin >> t;
	while (t--){
		int a,b;
		cin >> a >> b;
		if (check(a) == check(b)){
			cout << "YES" << endl;
		} else{
			cout << "NO" << endl;
		}
	}
}