#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n * 2];
    for (int i = 0; i < n * 2; i++)
        cin >> arr[i];

    sort(arr, arr + n * 2);

    int sum[n];
    for (int i = 0; i < n; i++)
        sum[i] = arr[i] + arr[2 * n - i - 1];

    sort(sum, sum + n);
    cout << sum[n - 1] << endl;

    return 0;
}