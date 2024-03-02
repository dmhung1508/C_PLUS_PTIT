#include <bits/stdc++.h>
using namespace std;
int sl(string a){
	for (char &c:a){
		if (c == '5') c= '6';
	}
	int n = stoi(a);
	return n;
}
int sn(string a){
	for (char &c:a){
		if (c == '6') c= '5';
	}
	int n = stoi(a);
	return n;
}
int main(){
	string a, b;
	cin >> a >> b;
	cout << sn(a) + sn(b);
	cout << " " << sl(a) + sl(b);
}