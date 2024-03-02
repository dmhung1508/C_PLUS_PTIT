#include <bits/stdc++.h>
using namespace std;
long long mi(long long a){
    string s = to_string(a);
    for (int i =0; i<s.size(); i++){
        if (s[i] == '6') s[i] = '5';
    }
    return stoll(s);
}
long long ma(long long a){
    string s = to_string(a);
    for (int i =0; i<s.size(); i++){
        if (s[i] == '5') s[i] = '6';
    }
    return stoll(s);
}
int main(){
    int t;
    cin >> t;
    while (t--){
        long long a, b;
        cin >> a >> b;
        cout << mi(a) + mi(b) << " " << ma(a) + ma(b) << endl;
    }
    return 0;
}