#include <iostream>
#include <climits>
using namespace std;
#define OFFSET 1000

int arr[1000 + OFFSET + 1][1000 + OFFSET + 1] = {0, };

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    for (int i = x1 + OFFSET; i < x2 + OFFSET; i++)
        for (int j = y1 + OFFSET; j < y2 + OFFSET; j++)
            arr[i][j] = 1;
    
    cin >> x1 >> y1 >> x2 >> y2;
    for (int i = x1 + OFFSET; i < x2 + OFFSET; i++)
        for (int j = y1 + OFFSET; j < y2 + OFFSET; j++)
            if (arr[i][j] == 1)
                arr[i][j] = 0;

    // 1. minx, miny, maxx, maxy 구한다
    // 2. (maxx + 1 - minx) * (maxy + 1 - miny) 구한다

    int min_x, min_y, max_x, max_y;
    min_x = min_y = INT_MAX;
    max_x = max_y = INT_MIN;
    for (int i = 0; i < 1000 + OFFSET + 1; i++)
        for (int j = 0; j < 1000 + OFFSET + 1; j++)
            if (arr[i][j] == 1) {
                if (min_x > i) min_x = i;
                if (max_x < i) max_x = i;
                if (min_y > j) min_y = j;
                if (max_y < j) max_y = j;
            }
    // cout << min_x << ' ' << max_x << endl;
    // cout << min_y << ' ' << max_y << endl;

    if (min_x == INT_MAX && min_y == INT_MAX && max_x == INT_MIN && max_y == INT_MIN)
        cout << 0 << endl;

    else
        cout << (max_x - min_x + 1) * (max_y - min_y + 1) << endl;

    return 0;
}