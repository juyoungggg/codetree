#include <iostream>
using namespace std;

// D, R, U, L
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int n, m;
int x = 0, y = 0, dir = 0;

bool InRange(int x, int y) { return ((0 <= x && x < n) && (0 <= y && y < m)); }

int main() {
    cin >> n >> m;

    int arr[n][m] = {};
    arr[x][y] = 1;
    
    int nx, ny;
    for (int i = 2; i <= n * m; i++) {
        nx = x + dx[dir];
        ny = y + dy[dir];

        if (!InRange(nx, ny) || arr[nx][ny] != 0)
            dir = (dir + 1) % 4;
        
        x += dx[dir];
        y += dy[dir];
        arr[x][y] = i;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << arr[i][j] << ' ';
        cout << endl;
    }

    return 0;
}