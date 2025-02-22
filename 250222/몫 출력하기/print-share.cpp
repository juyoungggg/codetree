#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt = 0;
    while (1) {
        cin >> n;
        if (n % 2 == 1)
            continue;
        cout << (n / 2) << endl;
        cnt++;
        if (cnt >= 3)
            break;
    }
    return 0;
}