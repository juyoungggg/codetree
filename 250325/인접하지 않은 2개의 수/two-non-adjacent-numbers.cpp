#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n] = {};
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int dis, ans = INT_MIN;
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 2; j < n; j++) {
            dis = arr[i] + arr[j];
            ans = max(dis, ans);
        }
    }
    
    cout << ans << endl;
    return 0;
}