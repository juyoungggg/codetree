#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    int arr[100 + 1];
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int ans[n] = {};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            ans[i] += arr[j] * abs(i - j);
        }
    }
    
    int min = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (min > ans[i])
            min = ans[i];
    }

    cout << min << endl;

    return 0;
}