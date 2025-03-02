#include <iostream>
using namespace std;

int main() {
    char a, b;
    cin >> a >> b;

    cout << (int)a + (int)b << ' ';
    cout << (a >= b ? (int)a - (int)b : (int)b - (int)a) << endl;
    return 0;
}