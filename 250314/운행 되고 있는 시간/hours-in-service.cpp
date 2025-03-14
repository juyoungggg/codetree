#include <iostream>
#include <algorithm>
using namespace std;

int work[1000 + 1] = {};

int main() {
    int n;
    cin >> n;

    int a, b;
    int arr1[100 + 1] = {};
    int arr2[100 + 1] = {};
    for (int i = 1; i <= n; i++) {
        cin >> a >> b;
        arr1[i] = a;
        arr2[i] = b;
        for (int j = a; j < b; j++)
            work[j]++;
    }

    int cnt, maxval = 0;
    for (int i = 1; i <= n; i++) {
        cnt = 0;
        for (int j = arr1[i]; j < arr2[i]; j++)
            work[j]--;
        for (int j = 1; j <= 1000; j++)
            cnt += work[j];
        maxval = max(cnt, maxval);
    }

    cout << maxval << endl;
    return 0;
}