#include <bits/stdc++.h>
using namespace std;
int prime(int k){
    if (k <2) return 0;
    for (int i =2; i*i <=k; i++){
        if (k%i == 0) return 0;
    }
    return 1;
}
int sum(int k){
    int sum =0;
    while (k >0){
        sum += k  %10;
        k = k/10;
    }
    int j = prime(sum);
    return j;
}
int checkdg(int k){
    while (k>0){
        int j = k %10;
        k = k/10;
        if (prime(j) == 0) return 0;
    }
    return 1;
}
int dg(int k, int n){
    string a;
    a = to_string(k);
    if (a.size() == n) return 1;
        else return 0;
}
int check(int k,int n){
    if (prime(k) && sum(k) && checkdg(k) && dg(k,n)) return 1;
    return 0;
}
int main(){
    int k,n;
    cin >> k >> n;
    // string a;
    // a = to_string(k);
    // if (len(a) == n) cout << "Yes" << endl;
    //     else cout << "No" << endl;
    // if (prime(k)) cout << "k nto" << endl;
    //     else cout << "k ko nto" << endl;
    // if (sum(k)) cout << "sum nto" << endl;
    //     else cout << "sum ko nto" << endl;
    // while (k>0){
    //     int j = k %10;
    //     k = k/10;
    //     cout << prime(j) << endl;
    // }
    if (check(k,n)) cout << "Yes" << endl;
        else cout << "No" << endl;
}