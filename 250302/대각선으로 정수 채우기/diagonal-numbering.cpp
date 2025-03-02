#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr[n][m] = {};
    int cnt = 1;

    int row, col;

    for (int i = 0; i < m; i++) {
        row = 0;
        col = i;

        while (col >= 0 && row < n) {
            arr[row][col] = cnt;
            
            row++;
            col--;
            cnt++;
        }
    }

    for (int j = 1; j < n; j++) {
        row = j;
        col = m - 1;

        while (col >= 0 && row < n) {
            arr[row][col] = cnt;

            row++;
            col--;
            cnt++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << arr[i][j] << ' ';
        cout << endl;
    }


    return 0;
}