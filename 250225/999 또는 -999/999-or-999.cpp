#include <iostream>
using namespace std;

int main() {
    int arr[100];

    cin >> arr[0];
    int min = arr[0], max = arr[0];
    for (int i = 1; i < 100; i++) {
        cin >> arr[i];
        if (arr[i] == 999 || arr[i] == -999)
            break;

        if (arr[i] > max)
            max = arr[i];
        else if (min > arr[i])
            min = arr[i];
    }
    cout << max << ' ' << min << endl;

    return 0;
}