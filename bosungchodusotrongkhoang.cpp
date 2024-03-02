#include <bits/stdc++.h>
using namespace std;
int cmp(const void *a, const void *b){
	int *x = (int*) a;
	int *y = (int*) b;
	return *x-*y;
}
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n+1];
		for (int i =0; i<n; i++) cin >> a[i];
		qsort(a,n,sizeof(int), cmp);
		int dem=0;
		for (int i =1; i<n; i++){
			if (a[i] - a[i-1] >1)
				dem += a[i] - a[i-1]-1;
		}
		cout << dem << endl;
	}
}