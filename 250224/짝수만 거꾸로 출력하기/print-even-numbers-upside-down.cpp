#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];
    int num, cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num % 2 == 0)
            arr[cnt++] = num;
    }

    for (int i = cnt - 1; i >= 0; i--) {
        cout << arr[i] << ' ';
    }
    cout << endl;

    return 0;
}