#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int arr[100 + 1] = {};

    int candy, basket;
    for (int i = 0; i < n; i++) {
        cin >> candy >> basket;
        arr[basket] += candy;
    }

    int sum, ans = 0;
    if (k <= 50) {
        for (int c = k; c <= 100 - k; c++) {
            sum = 0;
            for (int j = c - k; j <= c + k; j++)
                sum += arr[j];
            if (ans < sum)
                ans = sum;
        }
    }

    else if (k > 50) {
        for (int i = 0; i < 100; i++)
            ans += arr[i];
    }

    cout << ans << endl;
    return 0;
}