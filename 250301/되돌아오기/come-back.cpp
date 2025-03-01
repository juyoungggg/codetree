#include <iostream>
using namespace std;

// U, R, D, L
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };
int x = 0, y = 0;

int GetDir(char c) {
    int n;
    switch (c) {
        case 'N': n = 0; break;
        case 'E': n = 1; break;
        case 'S': n = 2; break;
        case 'W': n = 3; break;
    }
    return n;
}

int main() {
    int n;
    cin >> n;

    char c;
    int d;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> c >> d;
        int dir = GetDir(c);
        for (int j = 0; j < d; j++) {
            x += dx[dir];
            y += dy[dir];
            cnt++;
            if (x == 0 && y == 0) {
                cout << cnt << endl;
                return 0;
            }
        }
    }

    cout << -1 << endl;
    return 0;
}