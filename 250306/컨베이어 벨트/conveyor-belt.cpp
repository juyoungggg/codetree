#include <iostream>
using namespace std;

int arr[200][2] = {};

int main() {
    int n, t;
    cin >> n >> t;

    for (int j = 0; j < n; j++)
        cin >> arr[j][0];
    
    for (int j = n - 1; j >= 0; j--)
        cin >> arr[j][1];

    for (int time = 0; time < t; time++) {
        int tmp1 = arr[n - 1][0];
        int tmp2 = arr[0][1];

        for (int i = n - 1; i >= 1; i--)
            arr[i][0] = arr[i - 1][0];
        arr[0][0] = tmp2;

        for (int i = 0; i < n - 1; i++)
            arr[i][1] = arr[i + 1][1];
        arr[n - 1][1] = tmp1;
    }
    
    for (int i = 0; i < n; i++)
        cout << arr[i][0] << ' ';
    cout << endl;
    for (int i = n - 1; i >= 0; i--)
        cout << arr[i][1] << ' ';
    cout << endl;

    return 0;
}