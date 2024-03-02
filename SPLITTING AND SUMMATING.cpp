#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string tong(string a, string b) {
    int k = b.size();
    for (int i = a.size(); i < b.size(); i++) a = '0' + a;
    int nho = 0, sum = 0;
    string num, res;
    for (int i = k - 1; i >= 0; i--) {
        sum = a[i] + b[i] + nho - '0' - '0';
        res = char(sum % 10 + '0') + res;
        nho = sum / 10;
    }
    if (nho != 0) {
        num = to_string(nho);
        res = num + res;
    }
    return res;
}

string tach(string a) {
    int k = a.size();
    string a1 = a.substr(0, k / 2);
    string a2 = a.substr(k / 2);
    
    return tong(a1, a2);
}

int main() {
    ifstream fin("DATA.in");
    string a;
    fin >> a;
    while (a.size() > 1) {
        a = tach(a);
        cout << a << endl;
    }
    return 0;
}
