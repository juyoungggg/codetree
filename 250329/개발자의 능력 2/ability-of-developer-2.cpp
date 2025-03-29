#include <iostream>
#include <climits>
using namespace std;

int arr[6];
int sum = 0;

int get_diff(int a, int b, int c, int d) {
    int sum1 = arr[a] + arr[b];
    int sum2 = arr[c] + arr[d];
    int sum3 = sum - sum1 - sum2;

    int max_diff = max(max(sum1, sum2), sum3);
    int min_diff = min(min(sum1, sum2), sum3);
    return max_diff - min_diff;
}

int main() {
    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    int ans = INT_MAX;
    int a = 0;
    for (int b = 1; b <= 5; b++) {
        for (int c = 1; c <= 5; c++) {
            if (c == b)
                continue;
            for (int d = 1; d <= 5; d++) {
                if (d == b || d == c)
                    continue;
                ans = min(get_diff(a, b, c, d), ans);
            }
        }
    }

    cout << ans << endl;
    return 0;
}