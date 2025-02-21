#include <iostream>
using namespace std;

int main() {
    int m;
    cin >> m;

    if (3 <= m && m <= 5)
        cout << "March" << endl;
    else if (6 <= m && m <= 8)
        cout << "Summer" << endl;
    else if (9 <= m && m <= 11)
        cout << "Fall" << endl;
    else
        cout << "Winter" << endl;
    
    return 0;
}