#include <iostream>
using namespace std;

/*
1. 적어도 오른쪽 아래로 한 칸 씩은 이동해야 함
2. 색이 항상 달라야 함
3. 출발 / 도착지점 제외 2곳 뿐이어야 함

0. 만약 [0][0] 과 [r][c]가 같으면 0으로 정하고 코드 종료
1. 출발지점에 x, y 잡기
2. x, y 1씩 더한 곳부터 문자 다른 곳 찾기
3. 찾으면 거기서부터 1씩 더해서 또 반대인 문자 위치 찾기
4. 경우의 수 정답에 더해가기
*/

int r, c;

char arr[15][15] = {};

int main() {
    cin >> r >> c;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> arr[i][j];

    int ans = 0;
    if (arr[0][0] == arr[r - 1][c - 1]) {
        cout << ans << endl;
        return 0;
    }

    int x = 0, y = 0;
    char tmp = arr[x][y];

    for (int i = x + 1; i < r - 2; i++)
        for (int j = y + 1; j < c - 2; j++)
            if (arr[i][j] != tmp) {
                for (int k = i + 1; k < r - 1; k++)
                    for (int l = j + 1; l < c - 1; l++)
                        if (arr[k][l] != arr[i][j])
                            ans++;
            }

    cout << ans << endl;

    return 0;
}