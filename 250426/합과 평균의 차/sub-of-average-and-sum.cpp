#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int sum = a + b + c;
    cout << sum << endl;

    int avg = sum / 3;
    cout << avg << endl;

    cout << sum - avg << endl;
    return 0;
}