#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int N, M, D, S;

int main() {
    cin >> N >> M >> D >> S;

    int p[1000] = {};
    int m[1000] = {};
    int t[1000] = {};
    for (int i = 0; i < D; i++) {
        cin >> p[i] >> m[i] >> t[i];
    }

    map<int, int> sick;
    int sp, st;
    for (int i = 0; i < S; i++) {
        cin >> sp >> st;
        sick.insert({ sp, st });
    }

    int meds, ans = 0;
    for (int i = 1; i <= M; i++) {
        meds = 0;
        for (int j = 0; j < D; j++) {
            if (m[j] == i) {
                if ((sick[p[j]] >= t[j] + 1) || (sick[p[j]] == 0)) {
                    meds++;
                    cout << p[j] << ' ' << m[j] << ' ' << t[j] << endl;
                }
                else if (sick[p[j]] < t[j] + 1)
                    continue;
            }
        }
        // if (meds < sick.size())
        //     continue;

        ans = max(meds, ans);
    }

    cout << ans << endl;
    return 0;
}