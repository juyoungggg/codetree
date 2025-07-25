#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[1000000] = {0, };
    int b[1000000] = {0, };

    int a_loc = 0;
    int b_loc = 0;

    int a_time = 0;
    int b_time = 0;

    int v, t;
    for (int i = 0; i < n; i++) {
        cin >> v >> t;
        for (int j = 0; j < t; j++) {
            a_loc += v;
            a[++a_time] = a_loc;
        }
    }

    for (int i = 0; i < m; i++) {
        cin >> v >> t;
        for (int j = 0; j < t; j++) {
            b_loc += v;
            b[++b_time] = b_loc;
        }
    }

    int hof[a_time + 1] = {0, };
    for (int i = 1; i <= a_time; i++) {
        if (a[i] > b[i]) hof[i] = 1;
        else if (a[i] < b[i]) hof[i] = 2;
        else hof[i] = 3;
    }

    int ans = 0;
    for (int i = 1; i <= a_time; i++)
        if (hof[i] != hof[i - 1])
            ans++;

    cout << ans << endl;

    return 0;
}