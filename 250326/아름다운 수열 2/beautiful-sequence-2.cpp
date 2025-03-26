#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr1[n] = {};
    int arr2[m] = {};

    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    for (int i = 0; i < m; i++)
        cin >> arr2[i];
    
    sort(arr2, arr2 + m);

    int ans = 0;
    for (int i = 0; i < n - m - 1; i++) {
        int tmp[m] = {};
        for (int j = i; j < i + m; j++) 
            tmp[j - i] = arr1[j];
        sort(tmp, tmp + m);
        
        for (int k = 0; k < m; k++)
            cout << tmp[k] << ' ';
        cout << endl;
        
        int k;
        for (k = 0; k < m; k++) {
            if (arr2[k] != tmp[k])
                break;
        }
        if (k == m)
            ans++;
    }

    cout << ans << endl;
    return 0;
}