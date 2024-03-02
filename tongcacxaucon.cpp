#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        string  a;
        cin >> a;
        long long sum=0;
        int n = a.length();
        for (int i=0; i<n; i++){
            sum += a[i] - '0';
            for (int j = i+1; j <n; j++){
                string x = "";
                for (int l=i; l<=j ; l++){
                    x += a[l];
                }
                sum += stoll(x);
            }
        }
        cout << sum << endl;
    }
}