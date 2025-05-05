#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    string t;
    cin >> n >> k;
    cin >> t;

    int m = t.length();
    string arr[n];
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        if (str.substr(0, m) == t)
            arr[cnt++] = str;
    }

    sort(arr, arr + cnt);
    cout << arr[k - 1] << endl;
    return 0;
}