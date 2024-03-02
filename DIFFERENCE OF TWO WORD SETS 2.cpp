#include <bits/stdc++.h>
using namespace std;
int main(){
	ifstream fin1("DATA1.in");
	ifstream fin2("DATA2.in");
	string a;
	set<string> n,m,p,q;
	while (fin1 >> a){
		for (int i =0; i< a.size(); i++) a[i] = tolower(a[i]);
		n.insert(a);
	}
	while (fin2 >> a){
		for (int i =0; i< a.size(); i++) a[i] = tolower(a[i]);
		m.insert(a);
		if (n.find(a) == n.end()) p.insert(a);
	}
	for (auto x:n){
		if (m.find(x) == m.end() ) q.insert(x);
	}
	for (auto x:q) cout << x << " ";
	cout << endl;
	for (auto x:p) cout << x << " ";
}