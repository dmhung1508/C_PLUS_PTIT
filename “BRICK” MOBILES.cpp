#include<bits/stdc++.h>

using namespace std;
int check(char a){
	a = toupper(a);
	if (a == 'A' || a == 'B' || a== 'C') return 2;
	if (a == 'D' || a == 'E' || a== 'F') return 3;
	if (a == 'G' || a == 'H' || a== 'I') return 4;
	if (a == 'J' || a == 'K' || a== 'L') return 5;
	if (a == 'M' || a == 'N' || a=='O') return 6;
	if (a == 'P' || a == 'Q' || a== 'R'|| a== 'S') return 7;
	if (a == 'T' || a == 'U' || a== 'V') return 8;
	if (a == 'W' || a == 'X' || a== 'Y' || a == 'Z') return 9;
}
int so(string a){
	string b;
	b = "";
	for (int i =0; i< a.length(); i++){
		b+= '0'+ check(a[i]); 
	}
	for (int i =0; i< b.length()/2; i++){
		if (b[i] != b[b.length()-i-1]){
			return 0;
		}
	}
	return 1;
}
int main(){
	int t;
	cin.ignore();
	cin >> t;
	while (t--){
		string a;
		cin >> a;
		if (so(a)) cout << "YES" << endl;
			else cout << "NO" << endl;
	}
}
