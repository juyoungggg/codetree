#include <iostream>
using namespace std;

int main() {
    int s, e;
    cin >> s >> e;

    int cnt, ans = 0;
    for (int i = s; i <= e; i++) {
        cnt = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0)
                cnt++;
            if (cnt > 3)
                break;
        }
        if (cnt == 3)
            ans++;
    }

    cout << ans << endl;
    return 0;
}