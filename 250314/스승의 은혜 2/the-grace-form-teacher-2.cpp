#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, b;
    cin >> n >> b;

    int p[n] = {};
    for (int i = 0; i < n; i++)
        cin >> p[i];
    
    sort(p, p + n);

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (b - p[i] >= 0) {
            b -= p[i];
            ans++;
        }
        else {
            if (b - (p[i] / 2) >= 0) {
                b -= (p[i] / 2);
                ans++;
            }
            else
                break;
        }
    }

    cout << ans << endl;
    return 0;
}