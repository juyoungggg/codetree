#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n] = {};
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int sum;
    double avg;
    int ans = 0;
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++) {
            sum = 0;
            for (int k = i; k <= j; k++)
                sum += arr[k];
            avg = (double)sum / (j - i + 1);
            for (int k = i; k <= j; k++)
                if (avg == arr[k]) {
                    ans++;
                    break;
                }
        }
            
    cout << ans << endl;
    return 0;
}