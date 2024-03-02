#include <bits/stdc++.h>

using namespace std;

int main(){
    string a[100];
    cin >> a[1];
    int i = 1;
    while (cin.get() == ' '){
        i++;
        cin >> a[i];
    }	
    for (int j = 1; j < i; j++){
        a[j][0] = tolower(a[j][0]);
        cout << a[j][0];
    }
    for (int j = 0; j < a[i].length(); j++){
        a[i][j] = tolower(a[i][j]);
        cout << a[i][j];
    }
    cout << "@ptit.edu.vn";
    return 0;
}
