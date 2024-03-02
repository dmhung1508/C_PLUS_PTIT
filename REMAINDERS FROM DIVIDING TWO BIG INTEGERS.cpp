#include <iostream>
#include <string>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string N;
        long long M;
        cin >> N >> M;
        long long  remainder = 0;
        for (char c : N) {
            remainder = (remainder * 10 + (c-'0')) % M;
        }
        cout << remainder << endl;
    }

    return 0;
}
