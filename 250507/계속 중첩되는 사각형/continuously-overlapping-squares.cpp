#include <iostream>
using namespace std;
#define OFFSET 100


#define RED 1
#define BLUE 2


int arr[100 + OFFSET + 1][100 + OFFSET + 1] = {0, };

int main() {
    int n;
    cin >> n;

    int x1, x2, y1, y2;
    for (int i = 0; i < n; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        if (i % 2 == 0) {
            for (int j = x1 + OFFSET; j < x2 + OFFSET; j++)
                for (int k = y1 + OFFSET; k < y2 + OFFSET; k++)
                    arr[j][k] = RED;
        }
        else {
            for (int j = x1 + OFFSET; j < x2 + OFFSET; j++)
                for (int k = y1 + OFFSET; k < y2 + OFFSET; k++)
                    arr[j][k] = BLUE;
        }
    }

    int cnt = 0;
    for (int i = 0; i < 100 + OFFSET + 1; i++)
        for (int j = 0; j < 100 + OFFSET + 1; j++)
            if (arr[i][j] == BLUE)
                cnt++;

    cout << cnt << endl;
    return 0;
}