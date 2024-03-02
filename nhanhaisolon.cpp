#include <bits/stdc++.h>
using namespace std;

string tong(string a, string b){
    string res = "";
    while (a.size() < b.size()) a = "0" + a;
    while (b.size() < a.size()) b = "0" + b;
    int nho = 0;
    for (int i = a.size() - 1; i >= 0; i--){
        int so = (a[i] - '0') + (b[i] - '0') + nho;
        
        res = char(so % 10 + '0') + res;
        cout << so << " " << res <<  endl;
        nho = so / 10;
    }
    
    if(nho > 0) res = char(nho + '0') + res;
    cout << res << " " << nho << endl;
    return res;
}

string nhan(string a, int n){
    string res = "";
    int nho = 0;
    for (int i = a.size() - 1; i >= 0; i--){
        int so = (a[i] - '0') * n + nho;
        res = char(so % 10 + '0') + res;
        nho = so / 10;
    }
    
    if (nho > 0) res = to_string(nho) + res;
    return res;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        string a;
        string sum = "0";
        long long b;
        cin >> a >> b;
        string c = to_string(b);
        for (int i = c.size() - 1; i >= 0; i--){
            string d = nhan(a, c[i] - '0');
            
            for (int j = 0; j < c.size() - 1 - i; j++) d += '0';
            // cout << sum << " " << d << endl;
            sum = tong(sum, d);
        }
        int i = 0;
        while (i < sum.size() && sum[i] == '0') { // Loại bỏ các số 0 dư thừa ở đầu mảng
            i++;
        }
        if (i == sum.size()) { // Trường hợp kết quả bằng 0
            cout << "0" << endl;
        } else{
            for (int j = i; j< sum.size(); j++) cout << sum[i];
            cout << endl;
        }
    }
}
