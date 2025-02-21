#include <iostream>
using namespace std;

double ft2cm(double ft) { return ft * 30.48; }

int main() {
    double N;
    cin >> N;

    cout << fixed;
    cout.precision(1);
    cout << ft2cm(N) << endl;
    return 0;
}