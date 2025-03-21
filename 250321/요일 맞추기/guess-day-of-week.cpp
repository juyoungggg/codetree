#include <iostream>
#include <string>
using namespace std;

int month[12 + 1] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
string yoil[7] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };

int m1, d1, m2, d2;

int main() {
    cin >> m1 >> d1 >> m2 >> d2;
    
    int days = 1;
    if (m1 == m2 && d1 <= d2) {
        days += (d2 - d1);
    }

    else if (m1 == m2 && d1 > d2) {
        days -= (d1 - d2);
        while (days < 0) {
            days += 7;
            if (days >= 0)
                break;
        }
    }

    else if (m1 < m2) {
        days += month[m1] - d1;
        for (int i = m1 + 1; i < m2; i++)
            days += month[i];
        days += d2;
    }

    else if (m1 > m2) {
        days -= d1;
        for (int i = m1 - 1; i > m2; i--)
            days -= month[i];
        days -= month[m2] - d2;
        while (days < 0) {
            days += 7;
            if (days >= 0)
                break;
        }
    }

    cout << yoil[(days % 7)] << endl;
    return 0;
}