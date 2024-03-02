#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	int b[11];
	b[1] =1;
	b[2] =2;
	b[3] = 5;
	b[4] = 10;
	b[5] = 20;
	b[6] = 50;
	b[7] = 100;
	b[8] = 200;
	b[9] = 500;
	b[10] = 1000;
	while (t--){
		int a,n = 0;
		cin >> a;
		int t = 10;
		while (a >=1){
			n += a / b[t];
			a = a % b[t];
			t--;
		}
		cout << n << endl;
	}
}