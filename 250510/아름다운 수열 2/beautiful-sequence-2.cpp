#include <iostream>
#include <algorithm>
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
    sort(b, b + m);

    int cnt, ans = 0;
    for (int i = 0; i < n - m + 1; i++) {
        cnt = 0;
        int tmp[m] = { a[i], a[i + 1], a[i + 2] };
        sort(tmp, tmp + m);
        for (int j = 0; j < m; j++) {
            if (tmp[j] == b[j])
                cnt++;
        }
        if (cnt == m)
            ans++;
    }

    cout << ans << endl;
    return 0;
}