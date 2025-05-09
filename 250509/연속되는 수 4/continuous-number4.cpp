#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    int cnt = 0, maxcnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        
        if (i == 0) cnt = 1;
        else if (arr[i] <= arr[i - 1]) {
            maxcnt = maxcnt < cnt ? cnt : maxcnt;
            cnt = 1;
        }
        else if (arr[i] > arr[i - 1]) {
            cnt++;
        }
    }

    maxcnt = maxcnt < cnt ? cnt : maxcnt;
    cout << maxcnt << endl;
    return 0;
}