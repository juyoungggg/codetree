#include <iostream>
using namespace std;
#define OFFSET 100

int main() {
    int n;
    cin >> n;
    int arr[100 + OFFSET + 1][100 + OFFSET + 1] = {0, };
    
    int x, y;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        for (int j = x + OFFSET; j < x + OFFSET + 8; j++)
            for (int k = y + OFFSET; k < y + OFFSET + 8; k++)
                arr[j][k]++;
    }

    int total = 0;
    total += 64 * n;

    for (int i = 0; i < 100 + OFFSET + 1; i++)
        for (int j = 0; j < 100 + OFFSET + 1; j++)
            if (arr[i][j] >= 2)
                total -= (arr[i][j] - 1);

    cout << total << endl;
    return 0;
}

/*
1. 시작 좌표 ~ +8까지 arr + 1
2. n * 64 - arr[i] >= 2 라면 (arr[i] - 1)한 전체 값들 합
*/