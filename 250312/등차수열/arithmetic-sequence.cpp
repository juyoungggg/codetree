#include <iostream>
#include <climits>
using namespace std;

int n;
int arr[100] = {};

int main() {
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int maxval = INT_MIN, minval = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (maxval < arr[i])
            maxval = arr[i];
        
        if (minval > arr[i])
            minval = arr[i];
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = minval; k <= maxval; k++)
                if ((arr[j] - k) == (k - arr[i]))
                    ans++;
        }

    }
    cout << ans << endl;
    
    return 0;
}