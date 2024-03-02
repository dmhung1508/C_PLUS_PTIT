#include <bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cin >> a;
	cout << a/365 <<" ";
	a = a %365;
	cout << a/7 << " ";
	a = a%7;
	cout << a;
}