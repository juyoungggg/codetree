#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int num;
    int sum = 0, cnt = 0;
    double avg;
    for (int i = 0; i < n; i++) {
        cin >> num;
        sum += num;
        cnt++;
    }

    avg = (double)sum / cnt;
    cout << fixed;
    cout.precision(1);

    cout << sum << " " << avg << endl;

    return 0;
}