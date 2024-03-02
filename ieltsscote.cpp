#include <bits/stdc++.h>
using namespace std;
double diem(int a){
    double k = 0;
    if (a >= 39 && a <= 40) k = 9.0;
    if (a >= 37 && a <= 38) k = 8.5;
    if (a >= 35 && a <= 36) k = 8.0;
    if (a >= 33 && a <= 34) k = 7.5;
    if (a >= 30 && a <= 32) k = 7.0;
    if (a >= 27 && a <= 29) k = 6.5;
    if (a >= 23 && a <= 26) k = 6.0;
    if (a >= 20 && a <= 22) k = 5.5;
    if (a >= 16 && a <= 19) k = 5.0;
    if (a >= 13 && a <= 15) k = 4.5;
    if (a >= 10 && a <= 12) k = 4.0;
    if (a >= 7 && a <= 9) k = 3.5;
    if (a >= 5 && a <= 6) k = 3.0;
    if (a >= 3 && a <= 4) k = 2.5;
    return k;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int a,b;
        double m,n;
        cin >> a >> b >> m >> n;
        double k = diem(a) + diem(b);
        k = k + m + n;
        k = k /4;
        int p = 0;
        for (int i =0; i<= 9; i++){
            if (k - i <0){
                k = k -i+1;
                p = i-1;
                break;
            }
        }
        if (k >= 0.25 && k < 0.75) k = 0.5;
            else {
                if (k >= 0.75) k = 1;
                else if (k < 0.25) k = 0.0;
            }
        if (k != 0) cout << setprecision(2) <<  k+p << endl;
            else cout << k+p << ".0" << endl;
    }
}