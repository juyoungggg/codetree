#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int hours = a;
    int mins = b;

    int ans = 0;

    while (1) {
        if (hours == c && mins == d)
            break;
        
        ans++;
        mins++;

        if (mins == 60) {
            hours++;
            mins = 0;
        }
    }

    cout << ans << endl;

    return 0;
}