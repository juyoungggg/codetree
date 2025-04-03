#include <iostream>
using namespace std;

int x1[100] = {};
int x2[100] = {};

int n;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> x1[i] >> x2[i];
    
    int ans = 0;
    int j;
    bool flag;
    for (int i = 0; i < n; i++) {
        flag = true;
        for (j = 0; j < n; j++) {
            if (i == j) continue;
            if ((x2[i] <= x2[j] && x1[i] >= x1[j]) || (x2[i] > x2[j] && x1[i] < x1[j])) {
                flag = false;
                break;
            }
        }
        if (flag) ans++;
    }
    
    cout << ans << endl;
    return 0;
}