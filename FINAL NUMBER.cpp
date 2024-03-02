#include <iostream>
#include <string>
using namespace std;

// function to calculate sum of digits of a string
string sumOfDigits(string a){
    int sum = 0;
    for (int i = 0; i < a.length(); i++) {
        sum += a[i] - '0';
    }
    return to_string(sum);
}

int main(){
    int t;
    string a;
    cin >> t;
    while (t--){
        cin >> a;
        while (a.length() > 1){
            a = sumOfDigits(a);
        }
        cout << a << endl;
    }
    return 0;
}
