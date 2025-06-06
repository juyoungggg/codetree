#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int b[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> b[i];
    
    int dist = 0;
    for (int i = 1; i <= n; i++) {
        dist += abs(a[i] - b[i]) * (n - i);
    }

    cout << dist << endl;

    return 0;
}