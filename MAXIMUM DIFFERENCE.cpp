#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n];
		int min = -999999;
		cin >> a[0];
		int k = 1;
		for (int i =1; i<n;i++){
			cin >> a[i];
			for (int j = i-1; j>=0; j--)
			if (a[i] > a[j] && a[i] - a[j] > min){
				min = a[i] - a[j];
				k = 0;
			}
		}
		if ( k == 1) cout << "-1" << endl;
			else cout << min << endl;
	}
}