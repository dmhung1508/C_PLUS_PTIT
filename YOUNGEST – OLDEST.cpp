#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	string n1,n2;
	n1 = n2 = '/0';
	long long nu1=999999,nu2=0;
	while (t--){
		string a,b;
		string day,mon,yea;
		cin >> a >> b;
		day = b.substr(0,2);
		mon = b.substr(3,5);
		yea = b.substr(6);
		int tong = stoi(day) + stoi(mon)*30 + stoi(yea)*365;
		if (tong >nu2){
			nu2 = tong;
			n2 = a;
		}
		if (tong  < nu1){
			nu1 = tong;
			n1 = a;
		}
	}
	cout << n2 << endl;
	cout << n1;
}