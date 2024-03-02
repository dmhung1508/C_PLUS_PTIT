#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n ; i++) {
        
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                swapped = true;
                //cout << a[j] << " " << a[j+1] << endl;
            }
        }
        if (!swapped) {
            break;
        }
        cout << "Buoc " << i << ": ";
        for (int j = 0; j < n; j++) {
            cout << a[j] << " ";
        }
        cout << endl;
        
    }
    return 0;
}
