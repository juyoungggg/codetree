#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, char>a, pair<int, char>b) {
    return a.first < b.first;
}

int main() {
    int n;
    cin >> n;
    
    vector<pair<int, char>> v;
    
    int num;
    char c;

    for (int i = 0; i < n; i++) {
        cin >> num >> c;
        v.push_back(make_pair(num, c));
    }

    sort(v.begin(), v.end(), compare);

    int photo, ans = 0;
    for (int i = 0; i < n; i++) {
        int g, h;
        for (int j = i; j < n; j++) {
            g = h = 0;
            for (int k = i; k <= j; k++) {
                if (v[k].second == 'G')
                    g++;
                else if (v[k].second == 'H')
                    h++;
            }
            if (g == h || (g != 0 && h == 0) || (g == 0 && h != 0)) {
                photo = v[j].first - v[i].first;
                ans = max(ans, photo);
            }
        }
    }

    cout << ans << endl;
    return 0;
}