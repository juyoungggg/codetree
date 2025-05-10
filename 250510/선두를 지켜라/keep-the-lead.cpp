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

    // for (int i = 0; i < a_time; i++) 
    //     cout << a[i] << ' ' << b[i] << endl;

    int track[a_time] = {0, };
    // track의 원소가 0이면 공동 선두, 1이면 a가 선두, -1이면 b가 선두
    for (int i = 1; i < a_time; i++) {
        if (a[i] > b[i]) track[i] = 1;
        else if (a[i] == b[i]) track[i] = 0;
        else if (a[i] < b[i]) track[i] = -1;
    }

    int cnt = 0;
    for (int i = 2; i < a_time; i++) 
        if (a[i] * a[i - 1] < 0)
            cnt++;
        
    cout << cnt << endl;
    return 0;
}