#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0;
    while (n != 1) {
        n /= 2;
        ans++;
    }
    cout << ans << endl;
    return 0;
}