#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;

    int sum = 0;
    sum += (b - a) + (d - c);

    if (a <= c) {
        if (d < b)
            sum -= (d - c);
        else if (c < b)
            sum -= (b - c);
    }

    else if (c < a) {
        if (a < b && b < d)
            sum -= (b - a);
        else if (a < d)
            sum -= (d - a);
    }

    cout << sum << endl;
    return 0;
}
