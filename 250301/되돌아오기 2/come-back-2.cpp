#include <iostream>
#include <string>
using namespace std;

int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };
int x = 0, y = 0, dir = 0;


int main() {
    string s;
    cin >> s;

    int cnt = 0;
    for (int i = 0; i < s.length(); i++) {
        switch (s[i]) {
            case 'F': x += dx[dir]; y += dy[dir]; break;
            case 'L': dir = (dir - 1 + 4) % 4; break;
            case 'R': dir = (dir + 1) % 4; break;
        }
        cnt++;

        if (x == 0 && y == 0) {
            cout << cnt << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}