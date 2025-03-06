#include <iostream>
using namespace std;

int n;
int arr[100 + 1][100 + 1] = {};

int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };

bool InRange(int x, int y) { return ((0 <= x && x < n) && (0 <= y && y < n)); }

int FindMax(int x, int y) {
    int max = arr[x][y];
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (InRange(nx, ny) && max < arr[nx][ny])
            max = arr[nx][ny];
    }
    return max;
}

int main() {
    int x, y;
    cin >> n >> x >> y;
    x--; y--;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    while (InRange(x, y) && FindMax(x, y) != arr[x][y]) {
        cout << arr[x][y] << ' ';
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (InRange(nx, ny) && arr[nx][ny] > arr[x][y]) {
                x = x + dx[i];
                y = y + dy[i];
                break;
            }
        }
    }

    cout << arr[x][y] << endl;
    return 0;
}