#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        if (a.length() > b.length()) {
            swap(a, b);
        }
        int diff = b.length() - a.length();
        while (diff--) {
            a = '0' + a;
        }
        int nho = 0;
        for (int i =b.length()-1; i>=0; i--){
        	int sum = a[i] + b[i] -'0' - '0' + nho;
        	b[i] = sum % 10 + '0';
        	nho = sum / 10;
        	
		}
		if ( nho != 0) cout << nho;
		cout << b << endl;
    }
    return 0;
}
