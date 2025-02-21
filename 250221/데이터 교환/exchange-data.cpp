#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 6;
    int c = 7;

    // a b c => b <-> c => a c b
    int tmp = b;
    b = c;
    c = tmp;

    // a c b => a <-> c => c a b
    tmp = a;
    a = b;
    b = tmp;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}