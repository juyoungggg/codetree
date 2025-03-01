#include <iostream>
using namespace std;

int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { -1, 0, 1, 0 };
int n, m;

// 편안한 상태: 색칠된 칸 주변의 격자 내 색칠된 칸이 (최대 4칸 중) 정확히 3칸인 상태

bool InRange(int x, int y) { return ((1 <= x && x <= n) && (1 <= y && y <= n)); }

int main() {
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
            if (InRange(nx, ny) && arr[nx][ny] == 1)
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