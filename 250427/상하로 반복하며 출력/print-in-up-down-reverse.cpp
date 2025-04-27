#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i % 2 == 0) {
                arr[j][i] = j + 1;
            }   
            else {
                arr[j][i] = n - j;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << arr[i][j];
        cout << endl;
    }

    return 0;
}