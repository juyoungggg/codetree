#include <iostream>
#include <climits>
using namespace std;

int Calculator(int a, char o, int c) {
    if (o == '+') return a + c;
    else if (o == '-') return a - c;
    else if (o == '*') return a * c;
    else if (o == '/') return a / c;
    else return INT_MAX;
}

int main() {
    int a, c;
    char o;
    
    cin >> a;
    cin.ignore();

    cin >> o;
    cin.ignore();

    cin >> c;

    if (Calculator(a, o, c) == INT_MAX)
        cout << "False";
    else
        cout << a << ' ' << o << ' ' << c << " = " << Calculator(a, o, c);

    cout << endl;
    return 0;
}