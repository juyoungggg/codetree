#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int arr[6] = {};
int sum;

int get_diff(int i, int j, int k) {
    int sum1 = arr[i] + arr[j] + arr[k];
    int sum2 = sum - sum1;
    return abs(sum1 - sum2);
}

int main() {
    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    
    int ans = INT_MAX;
    for (int i = 0; i < 6; i++) 
        for (int j = i + 1; j < 6; j++)
            for (int k = j + 1; k < 6; k++) {
                ans = min(ans, get_diff(i, j, k));
            }

    cout << ans << endl;
    return 0;
}