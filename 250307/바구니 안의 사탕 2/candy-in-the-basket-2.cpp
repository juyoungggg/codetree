#include <iostream>
#include <climits>
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

    int sum, max = INT_MIN;
    for (int c = k; c <= 100 - k; c++) {
        sum = 0;
        for (int j = c - k; j <= c + k; j++)
            sum += arr[j];
        if (max < sum)
            max = sum;
    }
    
    cout << max << endl;
    return 0;
}