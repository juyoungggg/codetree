#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int hours = a;
    int mins = b;

    int cnt = 0;

    while (!(hours == c && mins == d)) {
        cnt++;
        mins++;

        if (mins == 60) {
            hours++;
            mins = 0;
        }
    }

    cout << cnt << endl;

    return 0;
}