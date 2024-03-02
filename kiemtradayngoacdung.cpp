#include <bits/stdc++.h>
using namespace std;
bool check(string s){
	stack<char> a;
	for (int i =0; i< s.size(); i++ ){
		if (s[i] == '(' || s[i] == '[' || s[i] == '{'){
			a.push(s[i]);
		}else {
			if (s[i] == ')' || s[i] == ']' || s[i] == '}'){
				if (a.empty()){
					return false;
				}
				char top = a.top();
				a.pop();
				if ((s[i] == ')' && top != '(') || (s[i] == ']' && top != '[') || (s[i] == '}' && top != '{')) return false;
			}
		}
	}
	return a.empty();
}
int main(){
	int t;
	cin >> t;
	while (t--){
		
		string s;
		cin >>s;
		if (check(s)) cout << "YES\n";
			else cout << "NO\n";
	}
	
}