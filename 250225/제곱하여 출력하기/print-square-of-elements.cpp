#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    int num;
    for (int i = 0; i < n; i++) {
        cin >> num;
        arr[i] = num * num;
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';

    cout << endl;

    return 0;
}