#include <iostream>
using namespace std;

bool can_partition(int nums[], int N) {
    int total_sum = 0;
    for (int i = 0; i < N; i++) {
        total_sum += nums[i];
    }
    if (total_sum % 2 != 0) {  // Tổng của tất cả các phần tử phải là số chẵn để có thể chia thành hai tập con bằng nhau.
        return false;
    }
    int target_sum = total_sum / 2;  // Tìm mục tiêu tổng mà mỗi tập con cần đạt được.
    bool dp[N + 1][target_sum + 1];
    // Khởi tạo giá trị cho trường hợp cơ sở dp[0][j] = false, dp[i][0] = true.
    for (int i = 0; i <= N; i++) {
        dp[i][0] = true;
    }
    // Tính giá trị cho các trường hợp khác.
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= target_sum; j++) {
            if (j < nums[i-1]) {  // Không chọn phần tử thứ i vào tập con thứ nhất.
                dp[i][j] = dp[i-1][j];
            } else {  // Thử cả hai phương án.
                dp[i][j] = dp[i-1][j] || dp[i-1][j-nums[i-1]];
            }
        }
    }
    return dp[N][target_sum];
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int nums[N];
        for (int i = 0; i < N; i++) {
            cin >> nums[i];
        }
        if (can_partition(nums, N)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
