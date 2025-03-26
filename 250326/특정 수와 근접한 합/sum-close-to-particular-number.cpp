#include <iostream>
#include <climits>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main() {
    int n, s;
    cin >> n >> s;

    int arr[n] = {};
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    int diff, ans = INT_MAX;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++) {
            diff = abs(s - (sum - arr[i] - arr[j]));
            ans = min(ans, diff);
        }
    
    cout << ans << endl;
    return 0;
}