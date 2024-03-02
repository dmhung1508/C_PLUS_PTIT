#include <bits/stdc++.h>
using namespace std;
int main(){
	int a[10000];
	memset(a,0,1001);
	int n;
	cin >> n;
	int i = 1;
	int k =1;
	while (i <=n){
		while (a[i] == 0){
			if ( k % 3 != 0 && k%10 !=3){
				a[i] = k;
				k++;
				i++;
			} else k++;
		}
	}
	cout << a[n];
}