#include <iostream>
using namespace std;

int arr[19][19] = {};

bool InRange(int x, int y) { return ((0 <= x && x < 19) && (0 <= y && y < 19)); }

bool RowCheck(int x, int y, int n) {
    if (arr[x][y + 1] == n && arr[x][y + 2] == n && arr[x][y + 3] == n && arr[x][y + 4])
        return true;
    return false;
}

bool ColCheck(int x, int y, int n) {
    if (arr[x + 1][y] == n && arr[x + 2][y] == n && arr[x + 3][y] == n && arr[x + 4][y] == n)
        return true;
    return false;
}

bool DiagCheck1(int x, int y, int n) {
    if (arr[x + 1][y + 1] == n && arr[x + 2][y + 2] == n && arr[x + 3][y + 3] == n && arr[x + 4][y + 4] == n)
        return true;
    return false;
}

bool DiagCheck2(int x, int y, int n) {
    if (arr[x + 1][y - 1] == n && arr[x + 2][y - 2] == n && arr[x + 3][y - 3] == n && arr[x + 4][y - 4] == n)
        return true;
    return false;
}

int main() {
    for (int i = 0; i < 19; i++)    
        for (int j = 0; j < 19; j++)
            cin >> arr[i][j];
    
    for (int i = 0; i < 19; i++)
        for (int j = 0; j < 19; j++) {
            if (arr[i][j] != 0) {
                if (j <= 14 && RowCheck(i, j, arr[i][j])) {
                    cout << arr[i][j] << endl;
                    cout << i + 1 << ' ' << j + 2 + 1 << endl;
                    return 0;
                }
                else if (i <= 14 && ColCheck(i, j, arr[i][j])) {
                    cout << arr[i][j] << endl;
                    cout << i + 2 + 1 << ' ' << j + 1 << endl;
                    return 0;
                }
                else if (i <= 14 && j <= 14 && DiagCheck1(i, j, arr[i][j])) {
                    cout << arr[i][j] << endl;
                    cout << i + 2 + 1 << ' ' << j + 2 + 1 << endl;
                    return 0;
                }
                else if (i <= 14 && j >= 4 && DiagCheck2(i, j, arr[i][j])) {
                    cout << arr[i][j] << endl;
                    cout << i + 2 + 1 << ' ' << j - 2 + 1 << endl;
                    return 0;
                }
            }
        }
    cout << 0 << endl;
    return 0;
}