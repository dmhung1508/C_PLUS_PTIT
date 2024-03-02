#include <bits/stdc++.h>
using namespace std;
struct tim{
	int h;
	int m;
	int s;
	long long tong;
};
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	tim a[5001];
	for (int i = 1;i<=t; i++){
		cin >> a[i].h >> a[i].m >> a[i].s;
		a[i].tong = a[i].s + a[i].m*60 + a[i].h*60*60;
	}
	for (int i=1; i<t; i++){
		for (int j =i+1; j<=t; j++){
			if (a[i].tong > a[j].tong){
				tim n;
				n = a[i];
				a[i] = a[j];
				a[j]= n;
			}
		}
	}
	for (int i =1; i<=t; i++){
		cout << a[i].h << " " << a[i].m << " " << a[i].s << endl;
	}
}