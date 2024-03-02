#include<bits/stdc++.h>

using namespace std;
int max(int a, int b){
	if (a> b) return a;
	return b;
}
int check(string s){
	int a[100];
	int ma = 0;
	for (int i=0; i<= 100; i++) a[i] = 0;
	for (int i =0; i< s.length(); i++){
		a[s[i] - 'a']++;
		ma = max(ma,a[s[i] - 'a']);
	}
	if (ma <= s.length() - ma +1) return 1;
	return 0;
}
int main(){
	string a;
	int t;
	cin >> t;
	while (t--){
		cin >> a;
		cout << check(a) << endl;
	}
}