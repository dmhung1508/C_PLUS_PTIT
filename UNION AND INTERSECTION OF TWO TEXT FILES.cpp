#include <bits/stdc++.h>
using namespace std;
int main(){
	ifstream infile1("DATA1.in");
	ifstream infile2("DATA2.in");
	set<string> a,b,c;
	string s;
	while (infile1 >> s){
		for (int i =0; i< s.size(); i++ ) s[i] = tolower(s[i]);
		c.insert(s);
		b.insert(s);
	}
	while (infile2 >> s){
		for (int i =0; i< s.size(); i++ ) s[i] = tolower(s[i]);
		if (c.find(s) != c.end()) a.insert(s);
		b.insert(s);
		
		
	}
	for (auto x:b) cout << x << " ";
	cout << endl;
	for (auto x:a) cout << x << " ";
}