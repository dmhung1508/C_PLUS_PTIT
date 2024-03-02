#include<bits/stdc++.h>
using namespace std;

string multiply(string X, string Y) {
    int n = X.size(); // Độ dài của X
    int m = Y.size(); // Độ dài của Y
    vector<int> res(n + m, 0); // Mảng lưu kết quả, có độ dài là n + m
    for (int i = n - 1; i >= 0; i--) { // Duyệt các chữ số của X từ phải sang trái
        for (int j = m - 1; j >= 0; j--) { // Duyệt các chữ số của Y từ phải sang trái
            int temp = (X[i] - '0') * (Y[j] - '0') + res[i + j + 1]; // Nhân hai chữ số đó lại với nhau và cộng với res
            res[i + j + 1] = temp % 10; // Cập nhật phần đơn vị của kết quả
            res[i + j] += temp / 10; // Cập nhật phần hàng chục của kết quả
        }
    }
    int i = 0;
    while (i < res.size() && res[i] == 0) { // Loại bỏ các số 0 dư thừa ở đầu mảng
        i++;
    }
    if (i == res.size()) { // Trường hợp kết quả bằng 0
        return "0";
    }
    string ans = "";
    for (; i < res.size(); i++) { // Chuyển đổi kết quả từ dạng số sang chuỗi
        ans += to_string(res[i]);
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string X, Y;
        cin >> X >> Y; // Nhập hai số nguyên lớn X và Y dưới dạng chuỗi
        cout << multiply(X, Y) << endl; // Tính tích của X và Y và xuất kết quả
    }
    return 0;
}
