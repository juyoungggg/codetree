#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt = 0;
    while (1) {
        cin >> n;
        if (n % 2 == 1)
            continue;
        if (cnt >= 3)
            break;
        cout << (n / 2) << endl;
        cnt++;
    }
    return 0;
}