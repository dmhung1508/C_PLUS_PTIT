#include <iostream>
#include <cstring>
int a[102],b[10000];

using namespace std;
void fibo(){
	a[0] = 0;
	a[1] = 1;
	b[0] = 1;
	for (int i=2; i<= 20; i++){
		 a[i] = a[i-1] + a[i-2];
		 b[a[i]] = 1;
	}
}
int main(){
	int n;
	memset(b,0,10000);
	fibo();
	cin >> n;
	while (n--){
		int x,m;
		cin >> x;
		for (int i =1; i<= x; i++){
			cin >> m;
			if (b[m] == 1) cout << m << " ";
		}
		cout << endl;
	}
}