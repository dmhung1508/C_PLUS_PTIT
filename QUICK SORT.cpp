#include <bits/stdc++.h>
using namespace std;
int cmp(const void*a, const void*b){
	int *x= (int*) a;
	int *y= (int*) b;
	return *x-*y;
}
int main(){
	int t;
	ios_base::sync_with_stdio();
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n];
		for (int i =0; i<n; i++) cin >> a[i];
		qsort(a,n,sizeof(int), cmp);
		for (int i =0; i<n; i++) cout << a[i] <<" ";
		cout << endl;
	}
}