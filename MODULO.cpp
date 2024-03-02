#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a[4];
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    sort(a, a+4);
    long long gcd = a[3] - a[2];
    for (int i =1 ; i <= 2; i++){
        gcd = __gcd(gcd, a[i] - a[i-1]);
    }
    cout << gcd << endl;
}