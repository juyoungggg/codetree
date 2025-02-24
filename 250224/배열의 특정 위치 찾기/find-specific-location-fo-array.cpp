#include <iostream>
using namespace std;

int main() {
    int arr[10 + 1];

    int sum1 = 0, sum2 = 0;
    double avg;
    for (int i = 1; i <= 10; i++) {
        cin >> arr[i];
        if (i % 2 == 0)
            sum1 += arr[i];
        if (i % 3 == 0)
            sum2 += arr[i];
    }
    cout << fixed;
    cout.precision(1);
    cout << sum1 << ' ' << (double)(sum2) / 3 << endl;

    return 0;
}