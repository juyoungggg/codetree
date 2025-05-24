#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;

    int sum = 0;
    sum += (b - a + 1) + (d - c + 1);

    if (c <= b) {
        if (c <= a)
            sum -= (b - a);
        else
            sum -= (b - c);
    }

    else if (a <= d) {
        if (a <= c)
            sum -= (d - c);
        else
            sum -= (d - a);
    }

    cout << sum << endl;
    return 0;
}