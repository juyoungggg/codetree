#include <iostream>
#include <algorithm>
using namespace std;

// 상우하좌 (시계방향)
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int n, m;
int arr[200][200] = {};

bool InRange(int x, int y) { return ((0 <= x && x < n) && (0 <= y && y < m)); }

int block_1(int x, int y) {
    int maxval = 0;
    int nx_1, ny_1;
    int nx_2, ny_2;
    for (int k = 0; k < 4; k++) {
        nx_1 = x + dx[k], nx_2 = x + dx[(k + 1) % 4];
        ny_1 = y + dy[k], ny_2 = y + dy[(k + 1) % 4];
        if (InRange(nx_1, ny_1) && InRange(nx_2, ny_2))
            maxval = max(maxval, arr[x][y] + arr[nx_1][ny_1] + arr[nx_2][ny_2]);
    }
    return maxval;
}

int block_2(int x, int y) {
    int maxval = 0;
    int nx_1, ny_1;
    int nx_2, ny_2;
    for (int k = 1; k <= 2; k++) {
        nx_1 = x + dx[k], ny_1 = y + dy[k];
        nx_2 = x + dx[k] * 2, ny_2 = y + dy[k] * 2;
        if (InRange(nx_2, ny_2))
            maxval = max(maxval, arr[x][y] + arr[nx_1][ny_1] + arr[nx_2][ny_2]);
    }
    return maxval;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];

    int maxval = 0;
    for (int x = 0; x < n; x++) {
        int block_max;
        for (int y = 0; y < m; y++) {
            block_max = max(block_1(x, y), block_2(x, y));
            // cout << block_1(x, y) << ' ' << block_2(x, y) << endl;
            maxval = max(maxval, block_max);
        }
    }

    cout << maxval << endl;
    return 0;
}