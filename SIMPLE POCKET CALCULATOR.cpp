#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	char c;
	cin >> a >> c >>b;
	if (c == '+') cout << setprecision(2) << fixed <<(a+b)*1.0;
	if (c == '-') cout << setprecision(2) << fixed <<(a-b)*1.0;
	if (c == '*') cout << setprecision(2) << fixed <<(a*b)*1.0;
	if (c == '/') cout << setprecision(2) << fixed <<(a*1.0/b);
}