#include <iostream>
using namespace std;

// L U R D
int dx[4] = { 0, -1, 0, 1 };
int dy[4] = { -1, 0, 1, 0 };
int n;

bool InRange(int x, int y) { return ((0 <= x && x < n) && (0 <= y && y < n)); }

int main() {
    cin >> n;
    int arr[n][n] = {};
    arr[n - 1][n - 1] = n * n;

    int x = n - 1, y = n - 1, dir = 0;
    for (int i = n * n - 1; i >= 1; i--) {
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if (!InRange(nx, ny) || arr[nx][ny] != 0)
            dir = (dir + 1) % 4;
        
        x = x + dx[dir];
        y = y + dy[dir];
        arr[x][y] = i;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << ' ';
        cout << endl;
    }

    return 0;
}