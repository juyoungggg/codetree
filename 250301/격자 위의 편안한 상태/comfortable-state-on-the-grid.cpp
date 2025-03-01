#include <iostream>
using namespace std;

bool InRange(int x, int y, int n) { return ((1 <= x && x <= n) && (1 <= y && y <= n)); }

int main() {
    int dx[4] = { 0, 1, 0, -1 };
    int dy[4] = { -1, 0, 1, 0 };

    int n, m;
    cin >> n >> m;

    int arr[n][n] = {};
    int x, y;
    int nx, ny, cnt = 0;
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        arr[x][y] = 1;
        for (int j = 0; j < 4; j++) {
            nx = x + dx[j];
            ny = y + dy[j];
            if (InRange(nx, ny, n) && arr[nx][ny] == 1)
                cnt++;
        }
        if (cnt == 3)
            cout << 1 << endl;
        else
            cout << 0 << endl;
        cnt = 0;
    }
    
    return 0;
}