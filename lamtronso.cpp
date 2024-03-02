#include <bits/stdc++.h>
using namespace std;
string lt(string a){
	if (a.size() <2) return a;
	int nho = 0;
	for (int i =a.size()-1; i>=1; i--){
		int k = a[i] - '0';
		k += nho;
		a[i] = '0';
		if (k>=5) nho=1;
			else nho = 0;
	}
	int k = a[0] - '0';
	k += nho;
	a[0] = k%10+'0';
	if (k/10 != 0) a = '1' +a;
	return a;
}
int main(){
	int t;
	cin >> t;
	while (t--){
		string a;
		cin >> a;
		cout << lt(a) << endl;
	}
}