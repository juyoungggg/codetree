#include <iostream>
#include <algorithm>
using namespace std;

bool Magic(int n) {
    int arr[10];
    int idx = 0;

    while (n != 0) {
        arr[idx++] = n % 10;
        n /= 10;
    }

    sort(arr, arr + idx);

    int cnt = 1;
    for (int i = 1; i < idx; i++) 
        if (arr[i - 1] != arr[i])
            cnt++;
    if (cnt == 2)
        return true;
    else
        return false;
}

int main() {
    int x, y;
    cin >> x >> y;

    int ans = 0;
    for (int i = x; i <= y; i++)
        if (Magic(i))
            ans++;

    cout << ans << endl;
    return 0;
}