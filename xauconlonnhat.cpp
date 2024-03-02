#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int k = 25,l=100000000;
    for (int i =0; i< s.size(); i++){
        for (int j = k; j>=0; j--){
            if (s.find('a' +j) < 100001){
                for (int  q = i; q < s.size(); q++){
                    if (s[q] == 'a' + j){
                        cout << s[q];
                        l = q;
                    }
                }
                i = l;
                k = j;
            } 
        }
    }
}