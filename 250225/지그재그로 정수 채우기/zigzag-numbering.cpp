#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr[n][m];
    int num = 0;
    for (int j = 0; j < m; j++) {
        if (j % 2 == 0)
            for (int i = 0; i < n; i++) {
                arr[i][j] = num;
                num++;
            }
        else
            for (int i = n - 1; i >= 0; i--) {
                arr[i][j] = num;
                num++;
            }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << arr[i][j] << ' ';
        cout << endl;
    }

    return 0;
}