#include <iostream>
using namespace std;

int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };

int n, m, t;

bool InRange(int x, int y) { return ((0 <= x && x < n) && (0 <= y && y < n)); }

int main() {
    cin >> n >> m >> t;

    int arr[n][n] = {};
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    int r, c;
    int marbles[n][n] = {};
    int next_marbles[n][n] = {};
    for (int i = 0; i < m; i++) {
        cin >> r >> c;
        marbles[--r][--c] = 1;
    }   // 구슬 위치까지 입력
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++)
    //         cout << marbles[i][j] << ' ';
    //     cout << endl;
    // }
    // cout << endl;
    // // 구슬 위치 출력

    for (int time = 0; time < t; time++) {
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                next_marbles[i][j] = 0;

        for (int x = 0; x < n; x++) {
            for (int y = 0; y < n; y++) {
                if (marbles[x][y] == 1) {
                    int max = 0;
                    int x_max, y_max;
                    for (int k = 0; k < 4; k++) {
                        int nx = x + dx[k];
                        int ny = y + dy[k];
                        if (InRange(nx, ny) && max < arr[nx][ny]) {
                            x_max = nx;
                            y_max = ny;
                            max = arr[x_max][y_max];
                            // cout << max << endl;
                        }
                    }
                    next_marbles[x_max][y_max]++;
                    // for (int i = 0; i < n; i++) {
                    //     for (int j = 0; j < n; j++)
                    //         cout << next_marbles[i][j] << ' ';
                    //     cout << endl;
                    // }
                    // cout << endl;
                }
            }
        }
        // marbles[n][n] = {};
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                marbles[i][j] = next_marbles[i][j];


        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (marbles[i][j] >= 2)
                    marbles[i][j] = 0;
        
        // for (int i = 0; i < n; i++) {
        //     for (int j = 0; j < n; j++)
        //         cout << marbles[i][j] << ' ';
        //     cout << endl;
        // }
        // cout << endl;
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (marbles[i][j] == 1)
                ans++;

    cout << ans << endl;
    return 0;
}