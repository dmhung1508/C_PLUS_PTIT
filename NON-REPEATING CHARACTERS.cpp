#include <bits/stdc++.h>
using namespace std;
string ch(string a){
	for (int i =0; i< a.length(); i++){
		a[i] = toupper(a[i]);
	}
	return a;
}
int main(){
	int t;
	cin >> t;
	string a;
	int b[26];
	while (t--){
		for (int i = 0; i<= 25; i++) b[i] = 0;
		cin >> a;
		a = ch(a);
		for (int i =0; i< a.length(); i++){
			b[a[i] - 'A']++;
		}
		for (int i =0; i< a.length(); i++){
			
			if (b[a[i] - 'A'] == 1) cout << a[i]; 
		}
		cout << endl;
	}
}