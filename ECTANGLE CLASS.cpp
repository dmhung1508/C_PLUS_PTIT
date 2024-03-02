#include <bits/stdc++.h>
using namespace std;
class dis {
	public:
		int a,b;
		string s;
		void input(){
			cin >> a >> b;
			cin >> s;
			s[0] = toupper(s[0]);
			for (int i =1; i< s.size(); i++) s[i] = tolower(s[i]);
		}
		void output(){
			if (a > 0 && b > 0) cout << (a+b)*2 << " " << a*b << " " << s;
				else cout << "INVALID";
		}
};
int main(){
	dis r1;
	r1.input();
	r1.output();
	return 0;
}