#include<bits/stdc++.h>
using namespace std;
map <string,int> req;
void check(){
			size_t t1 = date.find('/');
			size_t t2 = date.find('/', t1+1);
			string day = date.substr(0,t1);
			string month = date.substr(t1+1, t2-t1-1);
			string year = date.substr(t2+1);
			if (day.size() == 1) day = '0' + day;
			if (month.size() == 1) month = '0' + month;
			if (year.size() == 1) year = '0' + year;
			date = '\0';
			date = day + '/' + month + '/' + year;
		}
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