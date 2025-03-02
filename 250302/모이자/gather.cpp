#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[100 + 1];
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    int ans[n + 1] = {};
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j >= i)
                ans[i] += arr[j] * (j - i);
            else if (j < i)
                ans[i] += arr[j] * (i - j);
        }
    }
    
    int min = ans[1];
    for (int i = 2; i <= n; i++) {
        if (min > ans[i])
            min = ans[i];
    }

    cout << min << endl;

    return 0;
}