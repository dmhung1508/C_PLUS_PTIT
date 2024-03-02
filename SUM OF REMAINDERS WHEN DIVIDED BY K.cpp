#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int a,b,sum;
		cin >> a >> b;
		sum=0;
		if (a >= b/2) cout << "0" << endl;
			else{
				sum = (a+1)*a/2;
				if (sum == b) cout << "1" << endl;
					else cout << "0" << endl;
			}
	}
}