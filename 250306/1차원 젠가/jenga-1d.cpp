#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100 + 1] = {};
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    int temp[100 + 1] = {};
    for (int k = 0; k < 2; k++) {
        int s, e, len;
        cin >> s >> e;
        len = e - s + 1;
        int idx = 1;
        for (int i = 1; i <= n; i++) {
            if (s <= i && i <= e)
                continue;
            temp[idx++] = arr[i];
        }
        for (int i = 1; i <= n - len; i++)
            arr[i] = temp[i];
        n -= len;
    }

    cout << n << endl;
    for (int i = 1; i <= n; i++)
        cout << arr[i] << endl;

    return 0;
}