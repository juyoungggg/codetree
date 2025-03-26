#include <iostream>
using namespace std;

int n;

int arr[20][20] = {};

int Count(int i, int j) {
    int cnt = 0;
    cnt = arr[i][j] == 1 ? cnt + 1 : cnt;
    cnt = arr[i][j + 1] == 1 ? cnt + 1 : cnt;
    cnt = arr[i][j + 2] == 1 ? cnt + 1 : cnt;
    return cnt;
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    
    int max1 = 0, max2 = 0; // 가장 큰 값, 두 번째로 큰 값
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n - 2; j++) {
            if (Count(i, j) == 3) {
                max2 = max1;
                max1 = 3;
                j += 2; // 범위 초과 시 자동으로 for문 종료
            }
            else if (Count(i, j) == 2) {
                if (max1 >= 2 && max2 < 2) 
                    max2 = 2;
                else if (max1 < 2)
                    max1 = 2;
            }
            else if (Count(i, j) == 1) {
                if (max1 >= 1 && max2 < 1)
                    max2 = 1;
                else if (max1 < 1)
                    max1 = 1;
            }
        }

    cout << max1 + max2 << endl;
    return 0;
}