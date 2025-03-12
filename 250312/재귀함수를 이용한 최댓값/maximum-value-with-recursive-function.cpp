#include <iostream>
#include <algorithm>
using namespace std;

int n;
int arr[100] = {};

int f(int n) {
    if (n == 1)
        return arr[n - 1];

    return max(arr[n - 1], f(n - 1));
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << f(n) << endl;
    
    return 0;
}