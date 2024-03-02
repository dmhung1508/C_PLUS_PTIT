#include <bits/stdc++.h>
using namespace std;
int main(){
	string a;
	cin >> a;
	int s = a.size()-1;
	a[s] = tolower(a[s]);
	a[s-1] = tolower(a[s-1]);
	if (a[s] == 'y' && a[s-1] == 'p' && a[s-2] == '.'){
		cout << "yes";
	} else cout << "no";
}