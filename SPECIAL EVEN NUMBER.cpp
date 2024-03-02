#include <bits/stdc++.h>
using namespace std;
int main(){
	string a;
	int t;
	cin >> t;
	while (t--){
		cin >> a;
		int k =1;
		for (int i =0; i< a.length(); i++){
			int c = a[i] - '0';
			if (c % 2 == 1) {
				k = 0;
				break;
			}
		}
		if ( k == 1) cout << "YES" << endl;
			else cout << "NO" << endl;
	}
}