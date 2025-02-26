#include <iostream>
using namespace std;
#define OFFSET 100

int main() {
    int n;
    cin >> n;

    int arr[100 + OFFSET + 1][100 + OFFSET + 1] = {0, };
    int x1, y1, x2, y2;
    for (int i = 0; i < n; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        for (int j = x1 + OFFSET; j < x2 + OFFSET; j++) {
            for (int k = y1 + OFFSET; k < y2 + OFFSET; k++)
                arr[j][k] = 1;
        }
    }
    int cnt = 0;

    for (int i = 0; i <= 100 + OFFSET; i++)
        for (int j = 0; j <= 100 + OFFSET; j++) 
            if (arr[i][j] == 1)
                cnt++;
    
    cout << cnt << endl;
    
    return 0;
}