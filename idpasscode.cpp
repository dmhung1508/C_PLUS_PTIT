#include <bits/stdc++.h>
using namespace std;
long long check1(string a){
    char t[20];
    for (int i =65; i<= 74; i++){
        t[i-65] = (char)i;
    }
    char p[20];
    for (int i =75; i<= 84; i++){
        p[i-75] = (char)i;
    }
    long long b = 0;
    for (int i =0; i< a.size(); i++){
        if (a[i] >= 'A' && a[i] <= 'Z'){
            for (int j =0; j<= 9; j++){
                if (a[i] == t[j]) b = b*10 + (j);
            }
            for (int j =0; j<= 9; j++){
                if (a[i] == p[j]) b = b*10 + (j);
            }
        }
    }
        return b;
}
long long check2(string a){
    char t[20];
    for (int i =75; i<= 84; i++){
        t[i-75] = (char)i;
    }
    long long b = 0;
    for (int i =0; i< a.size(); i++){
        if (a[i] >= 'A' && a[i] <= 'Z'){
            for (int j =0; j< 9; j++){
                if (a[i] == t[j]) b = b*10 + (j);
            }
        }
    }
    return b;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        string a;
        cin >> n >> a;
        if (n == check1(a)) cout << "YES" << endl;
            else cout << "NO" << endl;
    }
}