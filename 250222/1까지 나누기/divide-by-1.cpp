#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt = 0;
    for (int i = 1; i <= 100; i++) {
        n /= i;
        cnt++;
        if (n <= 1)
            break;
    }

    cout << cnt << endl;
    return 0;
}