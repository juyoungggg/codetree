#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[n] = {0, };
    int b[m] = {0, };

    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    for (int i = 0; i < m; i++)
        cin >> b[i];

    int cnt, ans = 0;
    for (int i = 0; i < n - m + 1; i++) {
        cnt = 0;
        for (int j = i; j < i + m; j++) {
            for (int k = 0; k < m; k++)
                if (a[j] == b[k]) {
                    cnt++;
                    break;
                }
        }
        if (cnt == m)
            ans++;
    }

    cout << ans << endl;
    return 0;
}