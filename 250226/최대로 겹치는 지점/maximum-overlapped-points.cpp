#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100 + 1] = {0, };
    int x1, x2;
    for (int i = 0; i < n; i++) {
        cin >> x1 >> x2;
        for (int j = x1; j <= x2; j++)
            arr[j]++;
    }

    int max = 0;
    for (int i = 0; i <= 100; i++)
        if (max < arr[i])
            max = arr[i];
    
    cout << max << endl;
    return 0;
}