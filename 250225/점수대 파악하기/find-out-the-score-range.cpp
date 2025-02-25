#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int cnt[10 + 1] = {0, };

    for (int i = 0; i < 100; i++) {
        cin >> arr[i];
        if (arr[i] == 0)
            break;
        cnt[(arr[i] / 10)]++;
    }

    for (int i = 10; i >= 1; i--)
        cout << i * 10 << " - " << cnt[i] << endl;

    return 0;
}