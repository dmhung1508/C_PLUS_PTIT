#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision::cpp_int;
cpp_int uc(cpp_int a, cpp_int b)
{
	if (b == 0)
		return a;
	return uc(b, a % b);
}
cpp_int bcnn(cpp_int a, cpp_int b)
{
	return (a * b) / uc(a, b);
}
int main(){
	int t;
	cin >> t;
	while (t--){
		cpp_int a, b;
		cin >> a >> b;
		cout << bcnn(a, b) << endl;
	}
}