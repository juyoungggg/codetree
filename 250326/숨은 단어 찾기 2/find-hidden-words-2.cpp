#include <iostream>
#include <string>
using namespace std;

int n, m;

int dx[8] = { 0, 1, 1, 1, 0, -1, -1, -1 };
int dy[8] = { 1, 1, 0, -1, -1, -1, 0, 1 };

char arr[50][50] = {};

bool InRange(int x, int y) { return ((0 <= x && x < n) && (0 <= y && y < m)); }

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];

    int ans = 0;
    for (int x = 0; x < n; x++)
        for (int y = 0; y < m; y++)
            if (arr[x][y] == 'L') {
                for (int i = 0; i < 8; i++) {
                    int nx = x + dx[i];
                    int ny = y + dy[i];
                    if (InRange(nx + dx[i], ny + dy[i])) 
                        if (arr[nx][ny] == 'E' && arr[nx + dx[i]][ny + dy[i]] == 'E') 
                            ans++; 
                }
            }

    cout << ans << endl;
    return 0;
}