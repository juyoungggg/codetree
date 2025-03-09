#include <iostream>
using namespace std;

int n;
int r, c;
int arr[200 + 1][200 + 1] = {};

bool InRange(int x, int y) { return ((1 <= x && x <= n) && (1 <= y && y <= n)); }

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> arr[i][j];

    cin >> r >> c;

    int size = arr[r][c];

    for (int j = c - size + 1; j <= c + size - 1; j++)
        if (InRange(r, j))
            arr[r][j] = 0;
    
    for (int i = r - size + 1; i <= r + size - 1; i++)
        if (InRange(i, c))
            arr[i][c] = 0;

    int temp[n + 1][n + 1] = {};
    for (int j = 1; j <= n; j++) {
        int idx = n;
        for (int i = n; i >= 1; i--)
            if (arr[i][j] != 0) {
                temp[idx][j] = arr[i][j];
                idx--;
            }
    }

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            arr[i][j] = temp[i][j];

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            cout << arr[i][j] << ' ';
        cout << endl;
    }

    return 0;
}