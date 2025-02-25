#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr[n + 1][n + 1] = {0, };
    int r, c;
    for (int i = 0; i < m; i++) {
        cin >> r >> c;
        arr[r][c] = r * c;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            cout << arr[i][j] << ' ';
        cout << endl;
    }

    return 0;
}