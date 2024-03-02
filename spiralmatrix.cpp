#include <bits/stdc++.h>
using namespace std;

void pxuat(vector<vector<int>>& mat, int n, int m) {
    int top_row = 0, bottom_row = n-1, left_col = 0, right_col = m-1;
    while(top_row <= bottom_row && left_col <= right_col) {
        // print hàng trên
        for(int i=left_col; i<=right_col; ++i)
            cout << mat[top_row][i] << " ";
        ++top_row;

        if(top_row > bottom_row || left_col > right_col)
            break;

        // print hàng dưới
        for(int i=top_row; i<=bottom_row; ++i)
            cout << mat[i][right_col] << " ";
        --right_col;

        if(top_row > bottom_row || left_col > right_col)
            break;

        // print giữa
        for(int i=right_col; i>=left_col; --i)
            cout << mat[bottom_row][i] << " ";
        --bottom_row;

        if(top_row > bottom_row || left_col > right_col)
            break;

        // print trái
        for(int i=bottom_row; i>=top_row; --i)
            cout << mat[i][left_col] << " ";
        ++left_col;
    }
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> mat(n, vector<int>(m));
        for(int i=0; i<n; ++i)
            for(int j=0; j<m; ++j)
                cin >> mat[i][j];

        pxuat(mat, n, m);
        cout << endl;
    }
    return 0;
}
