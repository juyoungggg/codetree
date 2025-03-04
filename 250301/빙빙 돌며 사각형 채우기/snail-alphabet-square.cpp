#include <iostream>
using namespace std;

// R, D, L, U
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };
int n, m;
int x = 0, y = 0, dir = 0;

bool InRange(int x, int y) { return ((0 <= x && x < n) && (0 <= y && y < m)); }

int main() {
    cin >> n >> m;

    int cnt = 0;
    char arr[n][m] = {};
    arr[x][y] = (char)(cnt + 'A');
    
    int nx, ny;
    for (int i = 1; i < n * m; i++) {
        cnt++;
        if (cnt == 26)
            cnt = 0;
            
        nx = x + dx[dir];
        ny = y + dy[dir];

        if (!InRange(nx, ny) || arr[nx][ny] != '\0')
            dir = (dir + 1) % 4;
        
        x += dx[dir];
        y += dy[dir];
        arr[x][y] = (char)(cnt + 'A');
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << arr[i][j] << ' ';
        cout << endl;
    }

    return 0;
}
