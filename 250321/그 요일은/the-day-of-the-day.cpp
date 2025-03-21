#include <iostream>
using namespace std;

int m1, d1, m2, d2;
string str;

int days_in_month[12 + 1] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int CheckYoil(string s) {
    if (s == "Mon") return 0;
    else if (s == "Tue") return 1;
    else if (s == "Wed") return 2;
    else if (s == "Thu") return 3;
    else if (s == "Fri") return 4;
    else if (s == "Sat") return 5;
    else if (s == "Sun") return 6;
}

int TotalDays(int m, int d) {
    int days = 0;
    for (int i = 1; i < m; i++)
        days += days_in_month[m];
    days += d;
    return days;
}

int main() {
    cin >> m1 >> d1 >> m2 >> d2;    
    cin >> str;
    int yoil = CheckYoil(str);

    int days = TotalDays(m2, d2) - TotalDays(m1, d1);

    int ans = 0;
    for (int i = 0; i <= days; i++)
        if (i % 7 == yoil)
            ans++;

    cout << ans << endl;
    return 0;
}