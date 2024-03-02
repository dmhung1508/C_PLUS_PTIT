#include <bits/stdc++.h>
using namespace std;
int main(){
	int a[10]= {1,2,5,10,20,50,100,200,500,1000};
	int t;
	cin >> t;
	while (t--){
		int m;
		cin >> m;
		int sum = 0;
		for (int i =9; i>=0; i--){
		
				sum += m /a[i];
				m = m % a[i];
			
		}
		cout << sum << endl;
	}
}