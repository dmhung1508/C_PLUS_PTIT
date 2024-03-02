#include <iostream>
using namespace std;

// Hàm tìm kiếm nhị phân
int binarySearch(int arr[], int l, int r, int x) {
    while (l <= r) {
        int mid = l + (r - l) / 2;

        // Nếu phần tử ở giữa bằng x, trả về vị trí của nó trong dãy
        if (arr[mid] == x)
            return mid;

        // Nếu phần tử ở giữa lớn hơn x, tìm kiếm trong nửa đầu của dãy
        if (arr[mid] > x)
            r = mid - 1;

        // Nếu phần tử ở giữa nhỏ hơn x, tìm kiếm trong nửa sau của dãy
        else
            l = mid + 1;
    }

    // Không tìm thấy x trong dãy
    return -1;
}

int main() {
    int t;
    cin >> t;

    // Xử lý từng bộ test
    while (t--) {
        int n, k;
        cin >> n >> k;

        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        // Tìm vị trí của k trong dãy A bằng tìm kiếm nhị phân
        int pos = binarySearch(arr, 0, n-1, k);

        // In ra kết quả
        if (pos == -1) {
            cout << "NO" << endl;
        }
        else {
            cout << pos + 1 << endl;
        }
    }

    return 0;
}