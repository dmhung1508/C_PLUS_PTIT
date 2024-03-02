#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i =1; i<= 2*t; i+=2){
        for (int j=1; j<=i; j++) cout << j;
        cout << endl;
    }
}