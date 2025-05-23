#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

bool CarryCheck(int i, int j) {
    int tmp1 = i, tmp2 = j;
    while (1) {
        if (tmp1 == 0 || tmp2 == 0)
            break;
        if (tmp1 % 10 + tmp2 % 10 >= 10)
            return true;
        tmp1 /= 10;
        tmp2 /= 10;
    }
    return false;
}

int main() {
    int n;
    cin >> n;

    int arr[n] = {};
    for (int i = 0; i < n; i++) 
        cin >> arr[i];

    int sum, ans = -1;
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            if (CarryCheck(arr[i], arr[j]))
                continue;
            for (int k = j + 1; k < n; k++) {
                if (CarryCheck(arr[i] + arr[j], arr[k]))
                    continue;
                else {
                    sum = arr[i] + arr[j] + arr[k];
                    ans = max(sum, ans);
                }
            }
        }
    }
    cout << ans << endl;

    return 0;
}