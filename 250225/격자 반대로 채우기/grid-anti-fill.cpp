#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n][n];
    int num = 1;
    for (int j = 0; j < n; j++) {
        if (j % 2 == 0) {
            for (int i = n - 1; i >= 0; i--) {
                arr[i][n - j - 1] = num;
                num++;
            }
        }
        else
            for (int i = 0; i < n; i++) {
                arr[i][n - j - 1] = num;
                num++;
            }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << ' ';
        cout << endl;
    }
    return 0;
}