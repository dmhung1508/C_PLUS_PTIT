#include <bits/stdc++.h>
using namespace std;
int main(){
	string a;
	cin >> a;
	int c;
	for (int i = a.length() -1; i>=0; i--){
		if ( a[i] != '0'){
			c =i;
			break;
		}
	}
	for (int i = c; i>=0; i--) cout <<a[i];
}