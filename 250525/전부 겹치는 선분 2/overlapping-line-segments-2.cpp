#include <iostream>
#include <climits>
using namespace std;

int n;

int main() {
    cin >> n;

    int x1[n] = {0, };
    int x2[n] = {0, };

    for (int i = 0; i < n; i++)
        cin >> x1[i] >> x2[i];

    for (int i = 0; i < n; i++) {
        int max_x1 = 1;
        int min_x2 = INT_MAX;
        for (int j = 0; j < n; j++) {
            if (i == j)
                continue;
            max_x1 = x1[j] > max_x1 ? x1[j] : max_x1;
            min_x2 = min_x2 > x2[j] ? x2[j] : min_x2;
        }
        if (min_x2 >= max_x1) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}