#include <iostream>
#include <string>
using namespace std;

int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int n, t;
string str;

bool InRange(int x, int y) { return ((0 <= x && x < n) && (0 <= y && y < n)); }

int main() {
    cin >> n >> t;
    cin >> str;

    int startpos = n / 2;

    int arr[n][n] = {};
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    int len = str.length();
    int x = startpos, y = startpos, dir = 0;

    int sum = arr[x][y];

    for (int i = 0; i < len; i++) {
        if (str[i] == 'L') {
            dir--;
            if (dir < 0)
                dir += 4;
        }

        else if (str[i] == 'R') {
            dir++;
            if (dir >= 4) dir = dir % 4;
        }
        
        else if (str[i] == 'F') {
            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if (InRange(nx, ny)) {
                x = x + dx[dir];
                y = y + dy[dir];
                sum += arr[x][y];
            }
        }
    }

    cout << sum << endl;
    return 0;
}