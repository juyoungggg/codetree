#include <iostream>
#include <cstdlib>
#include <climits>
using namespace std;

int arr[100][2] = {};

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }

    int dis, ans = INT_MAX;
    for (int i = 1; i < n - 1; i++) {
        dis = 0;
        for (int j = 0; j < n - 1; j++)
            for (int k = 1; k < n; k++) {
                if (k == i)
                    continue;
                dis += abs(arr[j][0] - arr[k][0]) + abs(arr[j][1] - arr[k][1]);
                j = k;
            }

        ans = min(dis, ans);
    }

    cout << ans << endl;
    return 0;
}