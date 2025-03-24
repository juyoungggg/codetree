#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n][n] = {};
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    
    int cnt, max = INT_MIN;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n - 2; j++) {
            cnt = arr[i][j] + arr[i][j + 1] + arr[i][j + 2];
            max = (max > cnt) ? max : cnt;
        }

    cout << max << endl;
    return 0;
}