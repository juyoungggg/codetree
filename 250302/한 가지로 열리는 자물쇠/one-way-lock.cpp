#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int lock[3];
    for (int i = 0; i < 3; i++)
        cin >> lock[i];

    int ans = 0;
    int diff1, diff2, diff3;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            for (int k = 1; k <= n; k++) {
                diff1 = (i >= lock[0] ? i - lock[0] : lock[0] - i);
                diff2 = (j >= lock[1] ? j - lock[1] : lock[1] - j);
                diff3 = (k >= lock[2] ? k - lock[2] : lock[2] - k);
                if (diff1 <= 2 || diff2 <= 2 || diff3 <= 2)
                    ans++;
            }

    cout << ans << endl;
    return 0;
}