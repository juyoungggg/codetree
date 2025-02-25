#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int min = arr[1] - arr[0];
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++)
            if (min > arr[j] - arr[i])
                min = arr[j] - arr[i];
    }
    cout << min << endl;

    return 0;
}