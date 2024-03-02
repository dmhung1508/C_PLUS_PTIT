#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		double sum= 1;
		for (int i =2; i<=n; i++){
			sum +=i;
			sum = sqrt(sum);
		}
		cout << setprecision(5) << fixed << sum << endl;
	}
}