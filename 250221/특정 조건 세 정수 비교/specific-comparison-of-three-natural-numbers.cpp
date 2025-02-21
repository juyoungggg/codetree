#include <iostream>
using namespace std;

int main() {
    int a, b, c, min;
    cin >> a >> b >> c;

    if (b <= a && b <= c && a == b)
        cout << 1;

    else if (c <= a && c <= b && a == c)
        cout << 1;
    
    else
        cout << 0;

    cout << " ";

    cout << (a == b && b == c) << endl;

    return 0;
}