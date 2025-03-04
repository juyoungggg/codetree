#include <iostream>
using namespace std;

int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { -1, 0, 1, 0 };
int n, m;

int arr[100][100] = {}; // n은 최대 100

// 편안한 상태: 색칠된 칸 주변의 격자 내 색칠된 칸이 (최대 4칸 중) 정확히 3칸인 상태

bool InRange(int x, int y) { return ((1 <= x && x <= n) && (1 <= y && y <= n)); }

bool Comfort(int x, int y) {
    int nx, ny, cnt = 0;
    for (int i = 0; i < 4; i++) {
        nx = x + dx[i];
        ny = y + dy[i];
        if (InRange(nx, ny) && arr[nx][ny] == 1)
            cnt++;
    }

    if (cnt == 3)
        return 1;
    else
        return 0;
}

int main() {
    cin >> n >> m;

    int r, c;
    for (int i = 0; i < m; i++) {
        cin >> r >> c;
        arr[r][c] = 1;
        cout << (Comfort(r, c) ? 1 : 0) << endl;
    }
    
    return 0;
}