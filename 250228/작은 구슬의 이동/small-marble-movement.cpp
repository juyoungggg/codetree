#include <iostream>
using namespace std;

bool InRange(int x, int y, int n) { return ((0 <= x && x < n) && (0 <= y && y < n)); }

int GetDirection(char a) { // char형 방향 정보를 int로 변환시켜주는 함수 (0~3)
    int n;
    switch (a) {
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

    char dir = d;
    int move_dir = GetDirection(dir); // direction char2int

    for (int i = 0; i <= t; i++) {
        int nx = x + dx[move_dir], ny = y + dy[move_dir];
        if (!InRange(nx, ny, n))
            move_dir = 3 - move_dir;
        
        x = x + dx[move_dir];
        y = y + dy[move_dir];

    }
    cout << x << ' ' << y << endl;

    return 0;
}