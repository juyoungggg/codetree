#include <iostream>
using namespace std;

int c, g, h;

int getScore(int bound1, int bound2, int temperature) {
    if (temperature < bound1)
        return c;
    else if (bound1 <= temperature && temperature <= bound2)
        return g;
    else if (bound2 < temperature)
        return h;
}

int main() {
    int n;
    cin >> n >> c >> g >> h;

    int tbound[n][2];
    for (int i = 0; i < n; i++) {
        cin >> tbound[i][0] >> tbound[i][1];
    }

    int minbound = tbound[0][0], maxbound = tbound[0][1];
    for (int i = 1; i < n; i++) {
        if (minbound > tbound[i][0])
            minbound = tbound[i][0];
        if (maxbound < tbound[i][1])
            maxbound = tbound[i][1];
    }

    int sum, ans = 0;
    for (int i = minbound; i <= maxbound; i++) {
        sum = 0;
        for (int j = 0; j < n; j++) {
            sum += getScore(tbound[j][0], tbound[j][1], i);
        }
        if (ans < sum)
            ans = sum;
    }

    cout << ans << endl;
    return 0;
}