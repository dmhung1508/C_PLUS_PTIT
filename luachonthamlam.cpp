#include<bits/stdc++.h>
using namespace std;
string sl(int n, int s){
    string a = "";
    int i=1;
    while (i<=n){
        if (s-9 >=0){
            a += '9';
            s -= 9;
        }
        else{
            a += (s+'0');
            s = 0;
        }
        i++;
    }
    if (s > 0 || a[0] == '0') {
        a = "";
        a = to_string(-1);
    }
    return a;
}
string sn(int n, int k){
    string a = "";
    int i =1; 
    while (i<=n){
        if (k - 9 >=0){
            a = '9' + a;
            k = k-9;
        } else{
            a = to_string(k) + a;
            k = 0;
        }
        i++;

    }
    i = 0;
    while (a[i] == '0') i++;
    if (i > 0 && i<n) {
        a[i] = a[i]-1;
        a[0] = '1';
    } else if (i != 0) return "-1";
    
    if (k > 0) {
        a = "";
        a = to_string(-1);
    }
    return a;
}
int main(){
    int n,s;
    cin >> n >> s;
    cout << sn(n,s) << " " << sl(n,s);
    

}