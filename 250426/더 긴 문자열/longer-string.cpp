#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a;
    cin >> b;
    if (a.length() > b.length()) 
        cout << a << ' ' << a.length() << endl;
    else if (a.length() == b.length())
        cout << "same" << endl;
    else
        cout << b << ' ' << b.length() << endl;

    return 0;
}