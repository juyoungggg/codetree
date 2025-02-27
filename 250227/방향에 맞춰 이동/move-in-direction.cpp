#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int dx[4] = { 1, 0, -1, 0 };
    int dy[4] = { 0, -1, 0, 1 };
    // (E)동쪽 -> x += dx[0], y += dy[0]: 1, 0 이동
    // (S)남쪽 -> x += dx[1], y += dy[1]: 0,-1 이동
    // (W)서쪽 -> x += dx[2], y += dy[2]: -1,0 이동    
    // (N)북쪽 -> x += dx[3], y += dy[3]: 0, 1 이동
    
    int x = 0, y = 0; // 위치
    char c;
    int d; // distance
    for (int i = 0; i < n; i++) {
        cin >> c >> d;
        switch (c) {
            case 'E': x = x + (dx[0]) * d; y = y + (dy[0]) * d; break;
            case 'S': x = x + (dx[1]) * d; y = y + (dy[1]) * d; break;
            case 'W': x = x + (dx[2]) * d; y = y + (dy[2]) * d; break;
            case 'N': x = x + (dx[3]) * d; y = y + (dy[3]) * d; break;
        }
    }

    cout << x << ' ' << y << endl;

    return 0;
}