#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (i % 2 == 0) {
            sort(arr, arr + i + 1);
            cout << arr[i / 2] << ' ';
        }
    }
    cout << endl;
    return 0;
}