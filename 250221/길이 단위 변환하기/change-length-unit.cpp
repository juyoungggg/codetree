#include <iostream>
using namespace std;

double ft2cm(double ft) { return ft * 30.48; }
double mi2cm(double mi) { return mi * 160934; }

int main() {
    double ft = 9.2;
    double mi = 1.3;

    cout << fixed;
    cout.precision(1);

    cout << ft << "ft = " << ft2cm(ft) << "cm" << endl;
    cout << mi << "mi = " << mi2cm(mi) << "cm" << endl;
    
    return 0;
}