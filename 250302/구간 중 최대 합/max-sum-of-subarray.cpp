#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    int arr[n];
    for (int i = 0; i < n; i++) 
        cin >> arr[i];
    
    int sum = 0, max = 0;
    for (int i = 0; i < n - k + 1; i++) {
        sum = 0;
        for (int j = i; j < i + k; j++)
            sum += arr[j];
        if (max < sum)
            max = sum;
    }

    cout << max << endl;
    return 0;
}