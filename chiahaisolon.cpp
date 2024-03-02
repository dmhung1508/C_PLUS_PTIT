#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    fpclass a, b, quotient;

    // nhập hai số nguyên lớn tới 1000 chữ số
    cout << "Nhap so nguyen a: ";
    cin >> a;
    cout << "Nhap so nguyen b: ";
    cin >> b;

    // tính toán thương của hai số
    mpz_tdiv_q(quotient.get_mpz_t(), a.get_mpz_t(), b.get_mpz_t());

    // in kết quả
    cout << "Thuong cua a va b la: " << quotient << endl;

    return 0;
}
