#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

struct hs {
    string msv;
    string ten;
    string lop;
    float d1;
    float d2;
    float d3;
    float d;
};

void input(hs &a){
    getline(cin, a.msv);
    getline(cin, a.ten);
    getline(cin, a.lop);
    cin >> a.d1 >> a.d2 >> a.d3;
    a.d = a.d1 + a.d2 + a.d3;
    cin.ignore();
}

int main(){
    hs a[100];
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 1; i <= n; i++){
        input(a[i]);
    }
    for (int i = 1; i < n; i++){
        for (int j = i+1; j <= n; j++){
            if (strcmp(a[i].ten.c_str(), a[j].ten.c_str()) > 0){
                hs temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 1; i <= n; i++){
        cout << i << " " << a[i].msv << " " << a[i].ten << " " << a[i].lop << " ";
        cout << fixed << setprecision(1) << a[i].d1 << " " << a[i].d2 << " " << a[i].d3 << endl;
    }
    return 0;
}
