#include <iostream>
using namespace std;

int main() {
    int arr[4];
    int n;
    cin >> n;

    int sum, cnt = 0;
    for (int i = 0; i < n; i++) {
        sum = 0;
        for (int j = 0; j < 4; j++) {
            cin >> arr[j];
            sum += arr[j];
        }
        if ((double)(sum) / 4 >= 60) {
            cnt++;
            cout << "pass" << endl;
        }
        else
            cout << "fail" << endl;
    }

    cout << cnt << endl;

    return 0;
}