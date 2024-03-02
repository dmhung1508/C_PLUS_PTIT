#include <bits/stdc++.h>
using namespace std;
class dis {
	public:
		double a,b,c,d;
		void getin4(){
			cin >> a >> b >> c >>d;
		}
		void echod(){
			a = a-c;
			b = b-d;
			cout << fixed << setprecision(4) << sqrt(a*a + b*b) << endl;
		}
};
int main(){
	int t;
	dis r1;
	cin >> t;
	while (t--){
		r1.getin4();
		r1.echod();
	}
}