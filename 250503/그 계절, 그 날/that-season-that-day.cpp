#include <iostream>
#include <string>
using namespace std;

bool IsLeapYear(int y) {
    return y % 4 == 0 && y % 100 != 0 || y % 400 == 0;
}

bool CheckDate(int y, int m, int d) {
    if (m == 2) {
        if (IsLeapYear(y))
            return d <= 29;
        else
            return d <= 28;
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11)
        return d <= 30;
    else
        return d <= 31;
    return 0;
}

string GetSeason(int m) {
    if (m >= 3 && m <= 5) return "Spring";
    if (m >= 6 && m <= 8) return "Summer";
    if (m >= 9 && m <= 11) return "Fall";
    return "Winter";
}

int main() {
    int y, m, d;
    cin >> y >> m >> d;
    
    if (CheckDate(y, m, d))
        cout << GetSeason(m) << endl;
    else
        cout << -1 << endl;
    return 0;
}