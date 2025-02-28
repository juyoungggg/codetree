#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string arr[n];
    int sum = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i].length();
        if (arr[i][0] == 'a')
            cnt++;
    }

    cout << sum << ' ' << cnt << endl;
    return 0;
}