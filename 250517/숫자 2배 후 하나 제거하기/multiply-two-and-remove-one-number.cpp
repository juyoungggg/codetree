#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int sum, min_sum = INT_MAX;

    for (int i = 0; i < n; i++) {
        sum = 0;
        arr[i] *= 2;
        for (int j = 0; j < n; j++) {
            int tmparr[n - 1];
            int tmp = 0;
            for (int k = 0; k < n; k++)
                if (k != j)
                    tmparr[tmp++] = arr[k];
            
            for (int k = 0; k < n - 2; k++)
                sum += abs(tmparr[k + 1] - tmparr[k]);

            min_sum = sum < min_sum ? sum : min_sum;
        }
        arr[i] /= 2;
    }

    cout << min_sum << endl;

    return 0;
}