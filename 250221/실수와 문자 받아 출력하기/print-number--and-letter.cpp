#include <iostream>
using namespace std;

int main() {

    char c;
    double a, b;
    
    cin >> c;
    cin >> a >> b;

    cout << fixed;
    cout.precision(2);

    cout << c << endl;
    cout << a << endl;
    cout << b << endl;

    return 0;
}