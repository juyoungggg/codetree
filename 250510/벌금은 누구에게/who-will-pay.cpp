#include <iostream>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    int arr[n] = {0, };

    int penalty;
    for (int i = 0; i < m; i++) {
        cin >> penalty;
        arr[penalty - 1]++;

        for (int j = 0; j < n; j++)
            if (arr[j] >= k) {
                cout << j + 1 << endl;
                return 0;
            }   
    }
    
    cout << -1 << endl;
    return 0;
}