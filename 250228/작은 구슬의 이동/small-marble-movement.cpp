#include <iostream>
using namespace std;

bool InRange(int x, int y, int n) { return ((0 < x && x <= n) && (0 < y && y <= n)); }

int GetDirection(char d) { // char형 방향 정보를 int로 변환시켜주는 함수 (0~3)
    int n;
    switch (d) {
        case 'R': n = 0; break;
        case 'D': n = 1; break;
        case 'U': n = 2; break;
        case 'L': n = 3; break;
    }
    return n;
}

int main() {
    int dx[4] = { 0, 1, -1, 0 };
    int dy[4] = { 1, 0, 0, -1 };

    int n, t;
    int r, c;
    char d;
    cin >> n >> t;
    cin >> r >> c >> d;
    
    int coords[n][n] = {};
    int x = r, y = c;

    int dir = GetDirection(d); // direction char2int

    for (int i = 0; i < t; i++) {
        int nx = x + dx[dir], ny = y + dy[dir];
        if (!InRange(nx, ny, n)) {
            dir = 3 - dir;
            // 방향 전환에 1초 소요
        }
        
        else {
            x = x + dx[dir];
            y = y + dy[dir];
            // 방향 전환 필요 없을 시 그냥 이동
        }
    }
    cout << x << ' ' << y << endl;

    return 0;
}