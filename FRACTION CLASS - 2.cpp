#include <bits/stdc++.h>
using namespace std;
long long uc(long long a, long long b){
	if ( b == 0) return a;
	return uc(b, a%b);
}
class hs{
	public:
		long long a,b,c,d;
		void input(){
			cin >> a >> b >> c >> d;
			long long k = uc(a,b);
			a= a/k;
			b = b/k;
			k = uc(c,d);
			c = c/k;
			d = d/k;
		}
		void output(){
			long long x = uc(b,d);
			x = b*d/x;
			a = (x/b) *a;
			c = (x/d) *c;
			long long k = uc(a+c,x);
			a = (a+c)/k;
			x = x/k;
			cout << a << "/" << x;
		}
};
int main(){
	hs r1;
	r1.input();
	r1.output();
	return 0;
}