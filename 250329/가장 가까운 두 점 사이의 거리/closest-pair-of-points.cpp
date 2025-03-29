#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> v;

    int x, y;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }

    int dis, ans = INT_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            dis = (v[i].first - v[j].first) * (v[i].first - v[j].first)
                + (v[i].second - v[j].second) * (v[i].second - v[j].second);
            ans = min(ans, dis);
        }
    }

    cout << ans << endl;
    return 0;
}