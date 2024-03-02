#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string moves;
    
    cin >> n >> moves;

    // Khởi tạo vị trí và hướng ban đầu của robot
    int x = 0, y = 0;
    int dx = 0, dy = 1;

    // Duyệt lần lượt các ký tự trong dãy lệnh
    for (char move : moves) {
        if (move == 'G') {
            // Tiến về phía trước một đơn vị
            x += dx;
            y += dy;
        } else if (move == 'L') {
            // Quay mặt sang trái một đơn vị
            int tmp = dx;
            dx = -dy;
            dy = tmp;
        } else if (move == 'R') {
            // Quay mặt sang phải một đơn vị
            int tmp = dx;
            dx = dy;
            dy = -tmp;
        } else if (move == 'B') {
            // Lùi về phía sau một đơn vị
            x -= dx;
            y -= dy;
        }
    }

    // In ra tọa độ của vị trí cuối cùng của robot
    cout << x << ' ' << y << endl;

    return 0;
}
