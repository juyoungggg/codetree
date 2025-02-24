#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int n;

    for (n = 0; n < 10; n++) {
        cin >> arr[n];
        if (arr[n] == 0)
            break;
    }

    for (int i = n - 1; i >= 0; i--) 
        cout << arr[i] << ' ';

    cout << endl;

    return 0;
}