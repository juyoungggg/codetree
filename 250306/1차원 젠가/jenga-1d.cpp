#include <iostream>
using namespace std;

int arr[100 + 1] = {};

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    int temp[100 + 1] = {};
    int s1, e1, len1;
    cin >> s1 >> e1;
    len1 = e1 - s1 + 1;
    int idx1 = 1;
    for (int i = 1; i <= n; i++) {
        if (s1 <= i && i <= e1)
            continue;
        temp[idx1++] = arr[i];
    }
    for (int i = 1; i <= n - len1; i++)
        arr[i] = temp[i];

    int s2, e2, len2;
    cin >> s2 >> e2;
    len2 = e2 - s2 + 1;
    int idx2 = 1;
    for (int i = 1; i <= n - len1; i++) {
        if (s2 <= i && i <= e2)
            continue;
        temp[idx2++] = arr[i];
    }
    for (int i = 1; i <= n - len1 - len2; i++)
        arr[i] = temp[i];

    cout << n - len1 - len2 << endl;
    for (int i = 1; i <= n - len1 - len2; i++)
        cout << arr[i] << endl;

    return 0;
}