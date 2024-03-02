#include <bits/stdc++.h>
using namespace std;
int main(){
	ifstream fin("DATA.in");
	string a;
	multiset<string> m;
	while (fin >> a){
		try {
			int k = stoi(a);
		} catch(std::invalid_argument) {
			m.insert(a);
		} catch(std::out_of_range){
			m.insert(a);
		}
	}
	for (auto x:m) cout << x << " ";
 }