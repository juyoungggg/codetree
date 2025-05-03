#include <iostream>
using namespace std;

bool CheckDate(int m, int d) {
    if (m == 2)
        return d >= 1 && d <= 28;
    else if (m == 4 || m == 6 || m == 9 || m == 11)
        return d >= 1 && d <= 30;
    else if (m <= 12)
        return d >= 1 && d <= 31;
    return 0;
}

int main() {
    int m, d;
    cin >> m >> d;

    cout << (CheckDate(m, d) ? "Yes" : "No") << endl;
    return 0;
}