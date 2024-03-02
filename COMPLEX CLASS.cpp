#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        complex<int> A(a, b);
        complex<int> B(c, d);
        complex<int> sum = A + B;
         sum = sum * A;
        complex<int> product = (A+B) * (A+B);
        cout << sum.real() << " + " << sum.imag() << "i, " << product.real() << " + " << product.imag() << "i\n";
    }
    return 0;
}

