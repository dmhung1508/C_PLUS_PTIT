#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		string s1,s2;
		getline(cin >>ws,s1);
		getline(cin >> ws, s2);
		//tách
		istringstream iss1(s1);
		set<string> words1;
		string word;
		while (iss1 >> word){
			words1.insert(word);
		}
		istringstream iss2(s2);
		string words2;
		while (iss2 >> words2){
			words1.erase(words2);
		}
		for (auto x: words1) cout << x << " ";
		cout << endl;
	}
}