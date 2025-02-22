#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 2)
        cout << 28 << endl;

    else if (n <= 7 && n % 2 == 1 || n >= 8 && n % 2 == 0)
        cout << 31 << endl;
    
    else
        cout << 30 << endl;

    return 0;
}