#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    int even[n];
    int idx = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
            even[idx++] = arr[i];
    }

    for (int i = idx - 1; i >= 0; i--)
        cout << even[i] << ' ';
    cout << endl;

    return 0;
}