#include <iostream>
#include <climits>
using namespace std;

int arr[5] = {};
int sum = 0;

int get_diff(int a, int b, int c) {
    int sum1 = arr[a];
    int sum2 = arr[b] + arr[c];
    int sum3 = sum - sum1 - sum2;

    if (sum1 == sum2 || sum2 == sum3 || sum3 == sum1)
        return INT_MAX;

    int max_team = max(max(sum1, sum2), sum3);
    int min_team = min(min(sum1, sum2), sum3);
    
    return max_team - min_team;
}

int main() {
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    int ans = INT_MAX;
    for (int a = 0; a < 5; a++) {
        for (int b = 0; b < 5; b++) {
            if (b == a)
                continue;
            for (int c = 0; c <= 5; c++) {
                if (c == a || c == b)
                    continue;
                ans = min(ans, get_diff(a, b, c));
            }
        }
    }

    if (ans == INT_MAX)
        cout << -1 << endl;
    else
        cout << ans << endl;
    return 0;
}