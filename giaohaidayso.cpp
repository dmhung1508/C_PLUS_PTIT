#include <bits/stdc++.h>
using namespace std;
int main(){
	string a;
	cin >> a;
	int b[100];
	memset(b,0,sizeof(b));
	for (int i =0; i< a.size(); i++){
		b[a[i]-'a']++;
	}
	int dem = 0;
	for (int i =0; i<= 30; i++){
		if (b[i] !=0) dem++;
	}
	cout << dem;
}