#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int dx[4] = { 1, 0, -1, 0 };
    int dy[4] = { 0, -1, 0, 1 };

    int x = 0, y = 0; // 위치
    int direction = 3; // 방향 0으로 시작해서 회전할 때마다 1씩 이동

    for (int i = 0; i < s.length(); i++) {
        switch (s[i]) {
            case 'L': direction = (direction - 1 + 4) % 4; break;
            case 'R': direction = (direction + 1) % 4; break;
            case 'F': x += dx[direction]; y += dy[direction]; break;
        }
    }

    cout << x << ' ' << y << endl;
    return 0;
}