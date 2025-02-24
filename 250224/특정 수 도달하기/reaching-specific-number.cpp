#include <iostream>
using namespace std;

int main() {
    int arr[10];

    int sum = 0, cnt = 0;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (i == 0 || arr[i] < 250) {
            sum += arr[i];
            cnt++;
        }
        else if (arr[i] >= 250)
            break;
    }
    cout << sum << ' ' << (double)(sum) / cnt << endl;

    return 0;
}