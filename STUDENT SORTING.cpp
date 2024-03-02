#include <bits/stdc++.h>
using namespace std;
struct hs {
    string id;
    string name;
    string clas;
    string email;
};
int main(){
    int t;
    cin >> t;
    cin.ignore();
    hs ms[t+1];
    for (int i =0; i< t; i++){
        getline(cin, ms[i].id);
        getline(cin, ms[i].name);
        getline(cin, ms[i].clas);
        getline(cin, ms[i].email);
    }
    for (int i =0; i< t; i++){
        for (int j = i+1; j< t; j++){
            if (ms[i].clas > ms[j].clas) swap(ms[i], ms[j]);
        }
    }
    for (int i =0; i< t; i++){
        for (int j = i+1; j< t; j++){
            string m = ms[i].clas;
            string n = ms[j].clas;
            if (m == n){
                if (ms[i].id > ms[j].id) swap(ms[i], ms[j]);
            }
            
        }
    }
    for (int i = 0; i<t; i++){
        cout << ms[i].id << " " <<  ms[i].name << " " << ms[i].clas << " " << ms[i].email << endl;
    }
}
