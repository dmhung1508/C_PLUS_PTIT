#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    set<string> a,b;
    for (int l = 1; l<=2; l++) {
        getline(cin,s);
        istringstream ss(s);
        string k;
        while (ss >> k){
            for (int i =0; i< k.size(); i++) k[i] = tolower(k[i]);
            if (a.count(k) >0) b.insert(k);
            a.insert(k);
        }
    }
    for (auto x: a){
        cout << x << " ";
    }
    cout << endl;
    for (auto x: b){
        cout << x << " ";
    }
}