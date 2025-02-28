#include <iostream>
using namespace std;

int main() {
    string a, b;
    cin >> a;
    cin >> b;

    cout << (a + b == b + a ? "true" : "false") << endl;
    return 0;
}