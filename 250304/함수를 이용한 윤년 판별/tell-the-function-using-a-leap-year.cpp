#include <iostream>
using namespace std;

bool IsLeapYear(int y) {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

int main() {
    int y;
    cin >> y;

    cout << (IsLeapYear(y) ? "true" : "false") << endl;
    return 0;
}