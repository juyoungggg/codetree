#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    if (A >= B)
        cout << A - B << endl;
    if (B > A)
        cout << B - A << endl;

    return 0;
}