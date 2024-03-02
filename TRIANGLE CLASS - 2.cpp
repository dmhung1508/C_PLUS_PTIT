#include <bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793238
double canh(double a1,double a2, double b1, double b2){
	a1 = a1-b1;
	b1= a2-b2;
	return sqrt(a1*a1 + b1*b1);
}
class tam {
	private:
		double a1,a2,b1,b2,c1,c2;
	public:
		void intput(){
			cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
			double m1,m2,m3;
			m1 = canh(a1,a2,b1,b2);
			m2 = canh(a1,a2,c1,c2);
			m3 = canh(b1,b2,c1,c2);
			if (m1+m2 <=m3 || m2+m3 <=m1 || m1+m3 <=m2) cout << "INVALID" << endl;
				else {
					double s = m1+m2+m3;
					s = s/2;
					s = sqrt(s*(s-m1)*(s-m2)*(s-m3));
					cout << fixed << setprecision(2) << s << endl;
				}
		}
};
int main(){
	int t;
	cin >> t;
	tam r1;
	while (t--){
		r1.intput();
	}
}