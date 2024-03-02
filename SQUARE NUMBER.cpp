#include <bits/stdc++.h>
using namespace std;
int m[10001];
void scp(){
	memset(m,0,10001);
	for (int i =1; i<= 100; i++) m[i*i] =1;
}
int main(){
	scp();
	int a,b;
	cin >> a >> b;
	int sum = 0;
	for (int i=a; i<=b; i++){
		if (m[i] == 1) sum += i;
	}
	cout <<sum;
}