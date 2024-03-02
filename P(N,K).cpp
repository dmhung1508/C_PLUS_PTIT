#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9 +7;
int main(){
    int n;
    cin >> n;
    while (n--){
        long a,b;
        cin >> a >> b;
        if (b >a) cout << "0" << endl;
            else {
                long long sum = 1;
                for (int i =a; i>=a-b+1; i--){
                    sum = (sum * i) % mod;
                }
                cout << sum << endl;
            }
    }
}