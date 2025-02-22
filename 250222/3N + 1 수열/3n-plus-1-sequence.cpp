#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;
    while (1) {
        if (n == 1)
            break;

        if (n % 2 == 0)
            n /= 2;
        else
            n = n * 3 + 1;
        cnt++;
    }
    cout << cnt << endl;

    return 0;
}