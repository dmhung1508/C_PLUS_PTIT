#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for (int i =1; i<=n*2; i+=2){
		for (int j =1; j<=i; j++) cout << j;
		cout << endl;
	}
}