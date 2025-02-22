#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    bool flag = true;
    for (int i = a; i <= b; i++) {
        if (i % c == 0)
            flag = false;
    }

    cout << (flag ? "YES" : "NO") << endl;
    return 0;
}