#include<bits/stdc++.h>
using namespace std;
map <string,int> req;
void texty(string word){
    if (word.find('/') != -1){
        int k = word.find('/');
        string a = word.substr(0,k);
        string b = word.substr(k+1);
        texty(a);
        texty(b);
    }
    else if (word.find(',') != -1){
        int k = word.find(',');
        string a = word.substr(0,k);
        string b = word.substr(k+1);
        texty(a);
        texty(b);
    }
    else if (word.find(';') != -1){
        int k = word.find(';');
        string a = word.substr(0,k);
        string b = word.substr(k+1);
        texty(a);
        texty(b);
    }
    else if (word.find('?') != -1){
        int k = word.find('?');
        string a = word.substr(0,k);
        string b = word.substr(k+1);
        texty(a);
        texty(b);
    }
    else if (word.find('!') != -1){
        int k = word.find('!');
        string a = word.substr(0,k);
        string b = word.substr(k+1);
        texty(a);
        texty(b);
    }
    else if (word.find('.') != -1){
        int k = word.find('.');
        string a = word.substr(0,k);
        string b = word.substr(k+1);
        texty(a);
        texty(b);
    }
    else if (word.find(':') != -1){
        int k = word.find(':');
        string a = word.substr(0,k);
        string b = word.substr(k+1);
        texty(a);
        texty(b);
    }
    else if (word.find('-') != -1){
        int k = word.find('-');
        string a = word.substr(0,k);
        string b = word.substr(k+1);
        texty(a);
        texty(b);
    }
    else if (word.find('(') != -1){
        int k = word.find('(');
        string a = word.substr(0,k);
        string b = word.substr(k+1);
        texty(a);
        texty(b);
    }
    else if (word.find(')') != -1){
        int k = word.find(')');
        string a = word.substr(0,k);
        string b = word.substr(k+1);
        texty(a);
        texty(b);
    }

    
    else if (word != "") req[word]++;
}
bool cmp(pair<string, int> a, pair<string, int> b){
    if (a.second != b.second) return a.second > b.second;
    return a.first < b.first;
}


int main(){
    freopen("DOCUMENT.in", "r", stdin); // mở file input
    //freopen("DOCUMENT.out", "w", stdout); // mở file output
    string s;
    getline(cin,s);
    vector <string> v;
    
    while (getline(cin,s)){
        stringstream ss(s);
        string word;
        while (ss >> word){
            for (int i =0; i<word.size(); i++) word[i] = tolower(word[i]);
            texty(word);
        }
    }
    vector<pair<string,int>> res;
    for (auto x:req) res.push_back(x);
    sort(res.begin(), res.end(), cmp);
    for (int i=0; i<res.size(); i++){
        cout << res[i].first << " " << res[i].second << endl;
    }
    return 0;
}