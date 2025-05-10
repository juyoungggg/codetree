#include <iostream>
using namespace std;

#define MAX_VAL 1000000
#define OFFSET 1000000

int main() {
    int n, m;
    cin >> n >> m;

    int a[MAX_VAL + 1] = {0, };
    int b[MAX_VAL + 1] = {0, };

    char d;
    int t;

    int a_loc = 0, a_time = 0;
    for (int i = 0; i < n; i++) {
        cin >> d >> t;

        if (d == 'L') {
            for (int j = 0; j < t; j++)
                a[++a_time] = --a_loc;
        }
        
        else if (d == 'R') {
            for (int j = 0; j < t; j++)
                a[++a_time] = ++a_loc;
        }
    }

    int b_loc = 0, b_time = 0;
    for (int i = 0; i < m; i++) {
        cin >> d >> t;

        if (d == 'L') {
            for (int j = 0; j < t; j++)
                b[++b_time] = --b_loc;
        }
        
        else if (d == 'R') {
            for (int j = 0; j < t; j++)
                b[++b_time] = ++b_loc;
        }
    }

    for (int i = 1; i <= a_time; i++)
        if (a[i] == b[i]) {
            cout << i << endl;
            return 0;
        }

    cout << -1 << endl;
    return 0;
}