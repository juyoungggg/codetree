#include <iostream>
using namespace std;

int n, k;
int arr[100];

int main() {
    cin >> n >> k;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int ans = -1;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] == arr[j] && j - i <= k && ans < arr[i])
                ans = arr[i];   
    
    cout << ans << endl;
    return 0;
}