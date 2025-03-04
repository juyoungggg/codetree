#include <iostream>
using namespace std;

bool checkThrees(int n) {
    return n % 3 == 0;
}

bool searchThrees(int n) {
    while (n != 0) {
        if (n % 10 == 3 || n % 10 == 6 || n % 10 == 9)
            return 1;
        else
            n /= 10;
    }
    return 0;
}

bool checkTSN(int n) {
    return checkThrees(n) || searchThrees(n);
}

int main() {
    int a, b;
    cin >> a >> b;

    int cnt = 0;
    for (int i = a; i <= b; i++) {
        if (checkTSN(i))
            cnt++;
    }

    cout << cnt << endl;
    return 0;
}