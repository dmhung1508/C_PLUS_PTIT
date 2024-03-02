#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;  // số lượng test case
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        int n, m;  // kích thước ma trận
        cin >> n >> m;
        
        // khởi tạo ma trận a và đọc các phần tử của nó
        vector<vector<int>> a(n, vector<int>(m));
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < m; k++) {
                cin >> a[j][k];
            }
        }
        
        // tính ma trận chuyển vị của a
        vector<vector<int>> at(m, vector<int>(n));
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < m; k++) {
                at[k][j] = a[j][k];
            }
        }
        
        // tính tích của a và ma trận chuyển vị của nó
        vector<vector<int>> product(n, vector<int>(n));
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                int sum = 0;
                for (int l = 0; l < m; l++) {
                    sum += a[j][l] * at[l][k];
                }
                product[j][k] = sum;
            }
        }
        
        // in kết quả
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                cout << product[j][k] << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}
