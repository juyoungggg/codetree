#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    int arr[n + 1] = {0, };

    int a, b;
    for (int i = 0; i < k; i++) {
        cin >> a >> b;
        for (int j = a; j <= b; j++)
            arr[j]++;
    }
    int max_blocks = arr[1];
    for (int i = 2; i <= n; i++) {
        if (max_blocks < arr[i])
            max_blocks = arr[i];
    }
    
    cout << max_blocks << endl;
    return 0;
}