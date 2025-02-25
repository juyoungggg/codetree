#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    int cnt[9 + 1] = {0, };

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        cnt[arr[i]]++;
    }

    for (int i = 1; i <= 9; i++)
        cout << cnt[i] << endl;
    
    return 0;
}