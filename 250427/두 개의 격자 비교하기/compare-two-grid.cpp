#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr1[n][m];
    int arr2[n][m];
    int ans[n][m] = {0, };

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr1[i][j];
        
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            cin >> arr2[i][j];
            if (arr1[i][j] != arr2[i][j])
                ans[i][j] = 1;
            else
                ans[i][j] = 0;
        }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << ans[i][j] << ' ';
        cout << endl;
    }

    return 0;
}