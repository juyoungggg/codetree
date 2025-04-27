#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n] = {0, };
    int a, b;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        for (int j = a; j <= b; j++)
            arr[i] += j;
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << endl;

    return 0;
}