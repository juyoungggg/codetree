#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int buy = 1, sell = 0;
    int max = arr[1] - arr[0];

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++)
            if (arr[j] - arr[i] > max) {
                max = arr[j] - arr[i];
            }
    }

    cout << (max > 0 ? max : 0) << endl;
    return 0;
}