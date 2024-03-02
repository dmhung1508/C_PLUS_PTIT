#include <iostream>
#include <cmath>
using namespace std;
int a[1000001];
void sang(){
	for (int i =1; i <= 1000000; i++) a[i] = 1;
	a[1]= a[0] = 0;
	for (int i =2; i<= 1000; i++ ){
		for (int j = i*i; j<= 1000000; j+= i) a[j] = 0;
	}
}
int main(){
	int n;
	cin >> n;
	sang();
	while (n--){
		int b;
		cin >> b;
		int c = 0;
		for (int i = 2; i<= b/2; i++){
			if (a[i] == 1 && a[b-i] == 1){
				cout << i << " " << b-i << endl;
				c = 1;
				break;
			}
		}
		if (c == 0) cout << "-1" << endl;
	}
}