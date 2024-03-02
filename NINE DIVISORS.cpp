#include <bits/stdc++.h>
using namespace std;
long long couts(long long a){
    int k = sqrt(a);
    int pri[k+1];
    for (int i =0; i<=k; i++) pri[i] = i;
    for (int i =2; i*i <=k; i++){
        if (pri[i] == i){
            for (int j = i*i; j<=k; j+= i){
                if (pri[j] == j){
                    pri[j] = i;
                }
            }
        }
    }
    int  c = 0;
    for (int i =2; i<=k; i++){
        
            int q = pri[i];
            int p = pri[i / q];
            if (q*p == i && p != 1 && p != q) c++;
                else{
                    if (pri[i] == i){
                        if (pow(i,8) <= a) c++;
                    }
                }
        
    }
    return c;
}
int main(){
    long long a;
    cin >> a;
    cout << couts(a) << endl;
}