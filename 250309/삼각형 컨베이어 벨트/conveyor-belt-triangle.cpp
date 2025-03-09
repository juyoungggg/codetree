#include <iostream>
using namespace std;

int n, t;
int arr[3][200] = {};

int main() {
    cin >> n >> t;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    
    for (int time = 0; time < t; time++) {
        int tmp1 = arr[0][n - 1];
        for (int i = n - 1; i >= 1; i--)
            arr[0][i] = arr[0][i - 1];

        int tmp2 = arr[1][n - 1];
        for (int i = n - 1; i >= 1; i--)
            arr[1][i] = arr[1][i - 1];
        arr[1][0] = tmp1;

        int tmp3 = arr[2][n - 1];
        for (int i = n - 1; i >= 1; i--)
            arr[2][i] = arr[2][i - 1];
        arr[2][0] = tmp2;
        
        arr[0][0] = tmp3;
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << ' ';
        cout << endl;
    }

    return 0;
}