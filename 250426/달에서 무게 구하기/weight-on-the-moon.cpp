#include <iostream>
using namespace std;

int main() {
    int pend = 13;
    double grav = 0.165;

    cout << fixed;
    cout.precision(6);
    cout << pend << " * " << grav << " = " << pend * grav << endl;
    return 0;
}