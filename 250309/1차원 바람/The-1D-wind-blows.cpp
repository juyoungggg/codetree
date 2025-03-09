#include <iostream>
using namespace std;

// 상하좌우
int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };

int n, m, q;
int arr[100][100] = {};

bool InRange(int x, int y) { return ((0 <= x && x < n) && (0 <= y && y < m)); }

void ShiftLeft(int r) {
    int tmp = arr[r][m - 1];
    for (int i = m - 1; i >= 1; i--)
        arr[r][i] = arr[r][i - 1];
    arr[r][0] = tmp;
}

void ShiftRight(int r) {
    int tmp = arr[r][0];
    for (int i = 1; i <= m - 1; i++)
        arr[r][i - 1] = arr[r][i];
    arr[r][m - 1] = tmp;
}

bool CheckUp(int r) {
    if (InRange(r - 1, 0))
        for (int i = 0; i < m; i++)
            if (arr[r][i] == arr[r - 1][i])
                return 1;

    return 0;
}

bool CheckDown(int r) {
    if (InRange(r + 1, 0))
        for (int i = 0; i < m; i++)
            if (arr[r][i] == arr[r + 1][i])
                return 1;
    return 0;
}

int main() {
    cin >> n >> m >> q;
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];

    int r;
    char d;
    for (int k = 0; k < q; k++) {
        cin >> r;
        cin.get();
        cin >> d;
        r--;
        if (d == 'L')
            ShiftLeft(r);
        else if (d == 'R')
            ShiftRight(r);

        int tmp1, tmp2;
        char tmpdir1, tmpdir2;
        tmp1 = tmp2 = r;
        tmpdir1 = tmpdir2 = d;
        while (InRange(tmp1, 0)) {
            if (CheckUp(tmp1)) {
                tmp1--;
                if (tmpdir1 == 'L') {
                    ShiftRight(tmp1);
                    tmpdir1 = 'R';
                }
                else if (tmpdir1 == 'R') {
                    ShiftLeft(tmp1);
                    tmpdir1 = 'L';
                }
            }
            else
                break;
        }

        while (InRange(tmp2, 0)) {
            if (CheckDown(tmp2)) {
                tmp2++;
                if (tmpdir2 == 'L') {
                    ShiftRight(tmp2);
                    tmpdir2 = 'R';
                }
                else if (tmpdir2 == 'R') {
                    ShiftLeft(tmp2);
                    tmpdir2 = 'L';
                }
            }
            else
                break;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << arr[i][j] << ' ';
        cout << endl;
    }

    return 0;
}