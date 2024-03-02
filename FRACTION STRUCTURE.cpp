#include <bits/stdc++.h>
using namespace std;
long long uc(long long a, long long b){
	if (b == 0) return a;
	return uc(b, a%b);
}
struct Fraction {
	long long a,b;
};
void input( Fraction &p){
	cin >> p.a >> p.b;
}
void simplify(Fraction &p){
	long long k = uc(p.a, p.b);
	p.a = p.a/k;
	p.b = p.b/k;
}
void print(Fraction &p){
	cout << p.a << "/" << p.b;
}
int main() {
	struct Fraction p;
	input(p);
	simplify(p);
	print(p);
	return 0;
}
