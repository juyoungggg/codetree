#include <iostream>
using namespace std;

#define MAX_VAL 1000000

int main() {
    int n, m;
    cin >> n >> m;

    int a[MAX_VAL + 1] = {0, };
    int b[MAX_VAL + 1] = {0, };

    int t;
    char d;
    int a_loc = 0, a_time = 0;
    for (int i = 0; i < n; i++) {
        cin >> t >> d;

        if (d == 'L') 
            for (int j = 0; j < t; j++) 
                a[++a_time] = --a_loc;
        
        else if (d == 'R')
            for (int j = 0; j < t; j++)
                a[++a_time] = ++a_loc;
    }

    int b_loc = 0, b_time = 0;
    for (int i = 0; i < m; i++) {
        cin >> t >> d;

        if (d == 'L')
            for (int j = 0; j < t; j++)
                b[++b_time] = --b_loc;
        
        else if (d == 'R')
            for (int j = 0; j < t; j++)
                b[++b_time] = ++b_loc;
    }

    int max_time;

    if (a_time > b_time) {
        for (int i = b_time + 1; i <= a_time; i++)
            b[i] = b_loc;
        max_time = a_time;
    }

    else if (a_time < b_time) {
        for (int i = a_time + 1; i <= b_time; i++)
            a[i] = a_loc;
        max_time = b_time;
    }

    else if (a_time == b_time)
        max_time = a_time;

    int cnt = 0;
    for (int i = 2; i <= max_time; i++)
        if ((a[i - 1] != b[i - 1]) && (a[i] == b[i]))
            cnt++;

    cout << cnt << endl;
    return 0;
}