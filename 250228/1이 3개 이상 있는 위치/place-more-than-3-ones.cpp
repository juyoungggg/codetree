#include <iostream>
using namespace std;

bool InRange(int x, int y, int n) { return ((0 <= x && x < n) && (0 <= y && y < n)); }

int main() {
    int dx[4] = { 0, 1, 0, -1 };
    int dy[4] = { 1, 0, -1, 0 };

    int n;
    cin >> n;

    int coords[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> coords[i][j];
    
    int cnt = 0, ans = 0;
    int x = 0, y = 0, direction = 0;
    for (x = 0; x < n; x++) {
        for (y = 0; y < n; y++) {
            for (direction = 0; direction < 4; direction++) {
                int nx = x + dx[direction], ny = y + dy[direction];
                if (InRange(nx, ny, n) && coords[nx][ny] == 1)
                    cnt++;
            }
            if (cnt >= 3)
                ans++;
            cnt = 0;
        }
    }
    cout << ans << endl;

    return 0;
}