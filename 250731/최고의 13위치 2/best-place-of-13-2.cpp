#include <iostream>
#include <cstdlib>
using namespace std;

int arr[20][20] = {};

int Count(int i, int j, int k, int l) {
    return arr[i][j] + arr[i][j + 1] + arr[i][j + 2]
    + arr[k][l] + arr[k][l + 1] + arr[k][l + 2];
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    int max_val = 0;

    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n - 2; j++)
            for (int k = 0; k < n; k++)
                for (int l = 0; l < n - 2; l++)
                    if ((i == k && j + 2 < l) || i != k)
                        max_val = Count(i, j, k, l) > max_val ? Count(i, j, k, l) : max_val;

    cout << max_val << endl;
}