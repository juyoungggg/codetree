#include <iostream>
using namespace std;

void Modify(int &a, int &b) {
    if (a > b) {
        a *= 2;
        b += 10;
    }
    else {
        a += 10;
        b *= 2;
    }
}

int main() {
    int a, b;
    cin >> a >> b;

    Modify(a, b);
    cout << a << ' ' << b << endl;
    return 0;
}