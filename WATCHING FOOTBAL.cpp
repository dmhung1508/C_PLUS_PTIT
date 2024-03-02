#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n+1];
	int sum = 0;
	int m = 1,k=1;
	for (int i = 1; i<=n; i++ ){
		cin >> m;
		if (m-sum > 15){
			cout << sum +15 << endl;
			k = 0;
			break;
		} else {
			if ( m > sum) sum = m;
		}
	}
	if (sum +15 <= 90 ) sum+= 15;
		else {
			if (sum +15 > 90) sum = 90;
		}
	if ( k == 1) cout << sum;
}