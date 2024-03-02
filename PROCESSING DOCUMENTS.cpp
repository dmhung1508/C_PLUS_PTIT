#include <bits/stdc++.h>
using namespace std;
void text(string a){
    if (a.find('.') != string::npos || a.find(',') != string::npos || a.find('?') != string::npos || a.find('!') != string::npos ||  a.find(':') != string::npos) {
                a.pop_back();
            }
    if (a.find('.') !=-1){
        int k = a.find('.');
        string m = a.substr(0,k);
        string n = a.substr(k+1);
        text(m);
        text(n);
    }
    else if (a.find('?') !=-1){
        int k = a.find('?');
        string m = a.substr(0,k);
        string n = a.substr(k+1);
        text(m);
        text(n);
    }
    else if (a.find('!') !=-1){
        int k = a.find('!');
        string m = a.substr(0,k);
        string n = a.substr(k+1);
        text(m);
        text(n);
    }
    else if (a != " " && a != ""){
        a[0] = toupper(a[0]);
        for (int i=1; i< a.size(); i++) a[i] = tolower(a[i]);
        cout << a << endl;
    }
}
int main(){
    string a;
    //freopen("DOCUMENT.in","r",stdin);
    while (getline(cin ,a)){
        istringstream iss(a);
        string word, result;
        while (iss >> word) {
            
            result += word + ' ';
            
            if (word.find('.') != string::npos || word.find(',') != string::npos || word.find('?') != string::npos || word.find('!') != string::npos ||  word.find(':') != string::npos) {
                result.pop_back();
            }
        }
        cout << result << endl;
        // Xóa khoảng trắng cuối cùng
        text(result);
    }
}