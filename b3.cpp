#include <bits/stdc++.h>
using namespace std;

class decs{
    public:
        string code;
        string name;
        int num;
        void getin(){
            getline(cin,code);
            getline(cin,name);
            cin >> num;
            cin.ignore();
        }
};
string check(string s){
    for (int i =0; i< s.size(); i++){
        s[i] = tolower(s[i]);
    }
    return s;
}
string check1(string s){
    for (int i =0; i< s.size(); i++){
        s[i] = tolower(s[i]);
    }
    s[0] = toupper(s[0]);
    return s;
}
int main(){
    freopen("D:\\baitapc++\\DATA.in", "r", stdin);
    decs mon[200];
    int t;
    cin >> t;
    cin.ignore();
    for (int i =1; i<=t; i++){
        mon[i].getin();
    }
    for (int i =1; i<t; i++){
        for (int j=i+1; j<=t; j++){
            string q = mon[i].name;
            string w = mon[j].name;
            q = check(q);
            mon[i].name = q;
            mon[j].name = w;
            
            w = check(w);
            if (q >= w){
                swap(mon[i],mon[j]);
            }
        }
    }
    for (int i =1; i<=t; i++){
        cout << mon[i].code << " " << check1(mon[i].name) << " " << mon[i].num << endl;
    }
}