#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int n, cnt = 0, sum = 0;
    double avg;
    for (n = 0; n < 10; n++) {
        cin >> arr[n];
        if (arr[n] == 0)
            break;

        sum += arr[n];
        cnt++;
    }
    avg = (double)(sum) / cnt;
    cout << fixed;
    cout.precision(1);
    cout << sum << ' ' << avg << endl;
    
    return 0;
}