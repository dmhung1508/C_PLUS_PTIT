#include<bits/stdc++.h>

using namespace std;
int main(){
	string a;
	cin >> a;
	int i = 1;
	int sum = 1;
	while (i < a.length()-1){
		if (a[i] == a[i-1]){
			sum++;
			if (sum == 7) {
				cout << "YES";
				break;
			}
		} else{
			sum = 1;
		}
		i++;
	}
	if (sum < 7) cout << "NO";
}