#include <iostream>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    int arr[n];
    int cnt = 0, maxcnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        
        if (arr[i] <= t) {
            maxcnt = maxcnt < cnt ? cnt : maxcnt;
            cnt = 0;
        }

        else if (arr[i] > t) {
            cnt++;
        }
    }

    maxcnt = maxcnt < cnt ? cnt : maxcnt;
    cout << maxcnt << endl;
    return 0;
}