#include <iostream>
using namespace std;

#define MAX_VAL 1000000

int main() {
    int n, m;
    cin >> n >> m;

    int a[MAX_VAL] = {0, };
    int b[MAX_VAL] = {0, };
    int v, t;

    int a_loc = 0, a_time = 0;
    for (int i = 0; i < n; i++) {
        cin >> v >> t;

        for (int j = 0; j < t; j++) {
            a_loc += v;
            a[++a_time] = a_loc;
        }
    }

    int b_loc = 0, b_time = 0;
    for (int i = 0; i < m; i++) {
        cin >> v >> t;

        for (int j = 0; j < t; j++) {
            b_loc += v;
            b[++b_time] = b_loc;
        }
    }

    int tmp = 0, cnt = 0;
    for (int i = 1; i < a_time; i++) {
        if (tmp * (a[i] - b[i]) < 0)
            cnt++;

        if (a[i] != b[i])
            tmp = a[i] - b[i];
    }

    cout << cnt << endl;
    return 0;
}