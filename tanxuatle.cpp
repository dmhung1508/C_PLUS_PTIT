#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	 cin >>t;
	 while (t--){
	 	int k,p;
	 	set<int> a;
		multiset<int> b;
	 	cin >> k;
	 	for (int i =1; i<=k; i++){
	 		cin >> p;
	 		a.insert(p);
	 		b.insert(p);
		 }
		for (auto x:a){
			if (b.count(x) %2 == 1){
				cout << x <<  endl;
				break;
			}
		}
	 }
}