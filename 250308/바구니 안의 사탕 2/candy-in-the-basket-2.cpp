#include <iostream>
#include <algorithm>
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

    int sum, maxval = 0;
    for (int c = min(k, 100 - k); c <= max(k, 100 - k); c++) {
        sum = 0;
        for (int j = c - k; j <= c + k; j++)
            sum += arr[j];
        if (maxval < sum)
            maxval = sum;
    }
    
    cout << maxval << endl;
    return 0;
}