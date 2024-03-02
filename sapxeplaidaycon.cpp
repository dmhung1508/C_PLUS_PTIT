#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        b = a;
        sort(a.begin(), a.end());
        int i =0, j =n-1;
        int k=1,l=1,vt1=0,vt2=0;
        while (i != j){
            if (b[i] != a[i] && k == 1){
                k = 0;
                vt1 = i+1;
            }
            if (b[j] != a[j] && l == 1){
                l = 0;
                vt2 = j+1;
            }
            if (l==0 && k == 0){
                cout << vt1 << " " << vt2 << endl;
                break;
            } else{
                i++;
                j--;
            }
        }
    }
}