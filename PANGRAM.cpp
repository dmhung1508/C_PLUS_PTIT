#include <bits/stdc++.h>
using namespace std;
int dem(string a){
	int cout = 0;
	set <char> b;
	for (int i =0; i< a.size(); i++){
		a[i] = toupper(a[i]);
		if (a[i] >= 'A' && a[i] <= 'Z'){
			b.insert(a[i]);
			
		}
		
	}
	return b.size();
}
int main(){
	int t;
	cin >> t;
	while (t--){
		string a;
		int n;
		cin >> a;
		cin >> n;
		int k = 26- dem(a);
		if ( k <=n) cout << 1 << endl;
			else cout << 0 << endl;
	}
}