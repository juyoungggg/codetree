#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n >= 3000)
        cout << "book" << endl;
    else if (n >= 1000)
        cout << "mask" << endl;
    else
        cout << "no" << endl;
    return 0;
}