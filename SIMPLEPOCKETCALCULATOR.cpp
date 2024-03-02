#include <bits/stdc++.h>
using namespace std;
int main(){
    double a,b;
    char c;
    cin >> a >> c >> b;
    cout << fixed << setprecision(2);
    if (c == '+') cout << a+b << endl;
    else if (c == '-') cout << a-b << endl;
    else if (c == '*') cout << a*b << endl;
    else if (c == '/') cout << a/b << endl;
}