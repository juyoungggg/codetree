#include <iostream>
using namespace std;
#define OFFSET 100

int main() {
    int n;
    cin >> n;

    int arr[100 + 1 + OFFSET] = {0, };

    int x1, x2;
    for (int i = 0; i < n; i++) {
        cin >> x1 >> x2;
        for (int j = x1 + OFFSET; j <= x2 + OFFSET - 1; j++)
            arr[j]++;
    }

    int max = 0;
    for (int i = 2; i <= 100 + OFFSET; i++) {
        if (max < arr[i])
            max = arr[i];
    }

    cout << max << endl;

    return 0;
}