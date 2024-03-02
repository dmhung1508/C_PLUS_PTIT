#include <bits/stdc++.h>
using namespace std;
bool check(string a, string b){
    int i = 0;
    for (int j =0; j< a.size(); j++){
        if (a[j] == b[i]) i++;
    }
    return i == b.size();
}
int main(){
    int t;
    cin >> t;
    while (t--){
        long long n,k,max = -1;
        cin >> n;
        for (long long i = 1; i*i*i<= n; i++){
            k = i*i*i;
            if (check(to_string(n), to_string(k))){
                max = k;
            }
        }
        cout << max << endl;
    }
}