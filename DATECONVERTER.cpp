#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    int year = t/365;
    cout << year << " ";
    t = t -year*365;
    int month = t/7;
    cout << month << " ";
    t = t % 7;
    cout << t << endl;
}