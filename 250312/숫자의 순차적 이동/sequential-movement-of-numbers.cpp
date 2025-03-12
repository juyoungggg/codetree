#include <iostream>
using namespace std;

// 상부터 시계방향
int dx[8] = { -1, -1, 0, 1, 1, 1, 0, -1};
int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1 };

int n, m;
int arr[4][4] = {};

bool InRange(int x, int y) { return ((0 <= x && x < 4) && (0 <= y && y < 4)); }

int main() {
    cin >> n >> m;

    for (int i = 0; i < 4; i++) 
        for (int j = 0; j < 4; j++)
            cin >> arr[i][j];

    for (int time = 0; time < m; time++) {
        for (int num = 1; num <= 16; num++) {
            int x, y, maxval;
            for (int i = 0; i < 4; i++)
                for (int j = 0; j < 4; j++)
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

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++)
            cout << arr[i][j] << ' ';
        cout << endl;
    }

    return 0;
}