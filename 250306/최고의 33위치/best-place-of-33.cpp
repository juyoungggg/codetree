#include <iostream>
#include <climits>
using namespace std;

int arr[20][20] = {0, };

int check3by3(int a, int b) {
    int cnt = 0;
    for (int i = 0; i <= 2; i++)
        for (int j = 0; j <= 2; j++) {
            if (arr[a + i][b + j] == 1)
                cnt++;
        }
    return cnt;
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    int max = INT_MIN;
    for (int i = 0; i < n - 2; i++)
        for (int j = 0; j < n - 2; j++)
            if (max < check3by3(i, j))
                max = check3by3(i, j);
                
    cout << max << endl;

    return 0;
}