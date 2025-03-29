#include <iostream>
using namespace std;

int main() {
    int n;
    int a1, b1, c1;
    int a2, b2, c2;

    cin >> n;
    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;

    int ans = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            for (int k = 1; k <= n; k++) {
                if ((abs(a1 - i) <= 2 || abs(a1 - i) >= n - 2) && (abs(b1 - j) <= 2 || abs(b1 - j) >= n - 2)
                 && (abs(c1 - k) <= 2 || abs(c1 - k) >= n - 2))
                    ans++;
                
                else if ((abs(a2 - i) <= 2 || abs(a2 - i) >= n - 2) && (abs(b2 - j) <= 2 || abs(b2 - j) >= n - 2)
                    &&   (abs(c2 - k) <= 2 || abs(c2 - k) >= n - 2))
                    ans++;
            }

    cout << ans << endl;
    return 0;
}