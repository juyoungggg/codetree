#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int arr[1003] = {};

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int dis, ans = INT_MAX;
    for (int i = 0; i < n; i++) {
        dis = 0;
        for (int j = i; j < i + n; j++)
            dis += arr[j % n] * (j - i);
        
        ans = min(dis, ans);
    }

    cout << ans << endl;

    return 0;
}