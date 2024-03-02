#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        stack<string> a;
        string s;
        getline(cin,s);
        int k = s.size();
        for (int i =0; i<k; i++){
            if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
                string s1 = a.top();
                a.pop();
                string s2 = a.top();
                a.pop();
                string s3 = "(" + s2 + s[i] + s1 + ")";
                a.push(s3);
            }
            else{
                string s4 = "";
                s4 += s[i];
                a.push(s4);
            }
        }
        cout << a.top() << endl;
    }
}