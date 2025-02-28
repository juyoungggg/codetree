#include <iostream>
using namespace std;

bool InRange(int x, int y, int n, int m) { return ((0 <= x && x < n) && (0 <= y && y < m)); }

int main() {
    int dx[4] = { 0, 1, 0, -1 };
    int dy[4] = { 1, 0, -1, 0 };
    int x = 0, y = 0, dir = 0;

    int n, m;
    cin >> n >> m;

    int ans[n][m] = {};
    ans[x][y] = 1;

    for (int i = 2; i <= n * m; i++) {
        int nx = x + dx[dir], ny = y + dy[dir];
        
        if (!InRange(nx, ny, n, m) || ans[nx][ny] != 0) // 만약 범위를 벗어나는 좌표이거나 이미 방문한 좌표라면
            dir = (dir + 1) % 4; // 방향 전환
        
        x = x + dx[dir];
        y = y + dy[dir];
        ans[x][y] = i;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << ans[i][j] << ' ';
        cout << endl;
    }

    return 0;
}

/* 질문 n, m, answer의 변수들을 기본개념에서는 전역 변수로 사용하고 있는데, 이를 로컬 변수로 선언하고 InRange 함수에서 
로컬 변수를 매개변수로 참조하는 게 메모리가 적은지, 아님 개념설명에서 처럼 로컬 변수로 사용하는 게 메모리 소모가 적은지 */