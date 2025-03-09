#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    int arr[n][n] = {};
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    int cnt, ans = 0;

    if (m == 1)
        ans = 2 * n;

    else {
        for (int i = 0; i < n; i++) {
            cnt = 1;
            for (int j = 1; j < n; j++) {
                if (arr[i][j] == arr[i][j - 1])
                    cnt++;
                else
                    cnt = 1;
                
                if (cnt == m) {
                    ans++;   
                    break;
                }
            }
        }

        for (int j = 0; j < n; j++) {
            cnt = 1;
            for (int i = 1; i < n; i++) {
                if (arr[i - 1][j] == arr[i][j])
                    cnt++;
                else
                    cnt = 1;
                
                if (cnt == m) {
                    ans++;
                    break;
                }
            }
        }
    }
    
    cout << ans << endl;
    return 0;
}