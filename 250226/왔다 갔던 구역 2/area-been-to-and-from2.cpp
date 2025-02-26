#include <iostream>
using namespace std;
#define OFFSET 1000 // 10 * 100

int main() {
    int n;
    cin >> n;

    int arr[1000 + OFFSET + 1] = {0, };
    int pos = 1000; // 초기위치 0 (-1000 ~ 1000)

    int x;
    char c;
    for (int i = 0; i < n; i++) {
        cin >> x >> c;
        if (c == 'L') {
            for (int j = pos - 1; j >= pos - x; j--)
                arr[j]++;
            pos -= x;
        }
        else if (c == 'R') {
            for (int j = pos; j < pos + x; j++)
                arr[j]++;
            pos += x;
        }
    }

    int cnt = 0;
    for (int i = 0; i <= 1000 + OFFSET; i++)
        if (arr[i] >= 2)
            cnt++;

    cout << cnt << endl;

    return 0;
}