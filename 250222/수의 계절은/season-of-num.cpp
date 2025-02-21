#include <iostream>
using namespace std;

int main() {
    int m;
    cin >> m;
    if (3 <= m && m <= 5)
        cout << "Spring" << endl;
    else if (6 <= m && m <= 8)
        cout << "Summer" << endl;
    else if (9 <= m && m <= 11)
        cout << "Fall" << endl;
    else if ((1 <= m && m <= 2) || m == 12)
        cout << "Winter" << endl;
    return 0;
}