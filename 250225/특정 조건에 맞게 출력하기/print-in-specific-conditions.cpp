#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n;
    for (n = 0; n < 100; n++) {
        cin >> arr[n];
        if (arr[n] == 0)
            break;
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 1)
            cout << arr[i] + 3 << ' ';
        else
            cout << arr[i] / 2 << ' ';
    }
    cout << endl;
    
    return 0;
}