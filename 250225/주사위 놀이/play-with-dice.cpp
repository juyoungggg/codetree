#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int cnt[6 + 1] = {0, };

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        cnt[arr[i]]++;
    }

    for (int i = 1; i <= 6; i++)
        cout << i << " - " << cnt[i] << endl;

    return 0;
}