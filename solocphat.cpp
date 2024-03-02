#include <bits/stdc++.h>
using namespace std;
vector <string> q;
void check(){
    queue <string> a;
    a.push("6");
    a.push("8");
    while(1){
        string top = a.front();
        a.pop();
        if (top.length() == 15){
            break;
        }
        a.push(top + "6");
        a.push(top + "8");
        q.push_back(top + "6");
        q.push_back(top + "8");
    }
}
int main(){
    check();
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector <string> k;
        k.push_back("6");
        k.push_back("8");
        for (int i=0; i<q.size(); i++){
            if (q[i].length() <= n){
                k.push_back(q[i]);
            } else break;
        }
        cout << k.size() << endl;
        for (int i = k.size()-1; i>= 0; i--){
            cout << k[i] << " ";
        }
        cout << endl;
    }
}