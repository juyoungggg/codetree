#include <iostream>
using namespace std;

// 상부터 시계방향
int dx[8] = { -1, -1, 0, 1, 1, 1, 0, -1};
int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1 };

int n, m;
int arr[20][20] = {};

bool InRange(int x, int y) { return ((0 <= x && x < n) && (0 <= y && y < n)); }

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    for (int time = 0; time < m; time++) {
        for (int num = 1; num <= n * n; num++) {
            int x, y, maxval;
            for (int i = 0; i < n; i++)
                for (int j = 0; j < n; j++)
                    if (arr[i][j] == num) {
                        x = i;
                        y = j;
                        break;
                    }
            
            int x_max, y_max;
            maxval = 0;
            for (int i = 0; i < 8; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];
                if (InRange(nx, ny) && maxval < arr[nx][ny]) {
                    maxval = arr[nx][ny];
                    x_max = nx;
                    y_max = ny;
                }
            }
            int tmp = arr[x][y];
            arr[x][y] = arr[x_max][y_max];
            arr[x_max][y_max] = tmp;  
        }        

    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << ' ';
        cout << endl;
    }

    return 0;
}