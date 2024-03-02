#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t --){
		int n;
		cin >> n;
		int max = 0;
		int a;
		for (int i =1; i<=n;i++){
			cin >> a;
			if (a> max) max = a;
		}
		cout << max << endl;
	}
}