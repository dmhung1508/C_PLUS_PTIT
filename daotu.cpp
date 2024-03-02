#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	string s;
	while (t--){
		getline(cin,s);
		istringstream iss(s);
		string a;
		while (iss >> a){
			reverse(a.begin(), a.end());
			cout << a << " ";
		}
		cout << endl;
	}
}
3