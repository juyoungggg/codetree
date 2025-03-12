#include <iostream>
using namespace std;

int f(int n) {
    if (n < 10)
        return n;
    return (n % 10) + f(n / 10);
}

int main() {
    int a, b, c, n;
    cin >> a >> b >> c;
    n = a * b * c;

    cout << f(n) << endl;
    return 0;
}