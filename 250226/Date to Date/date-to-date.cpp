#include <iostream>
using namespace std;

int main() {
    int days_in_month[12 + 1] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int m1, d1, m2, d2;

    cin >> m1 >> d1;
    cin >> m2 >> d2;

    int month = m1;
    int day = d1;
    int answer_days = 1;

    while (1) {
        if (month == m2 && day == d2)
            break;

        answer_days++;
        day++;

        if (day > days_in_month[month]) {
            month++;
            day = 1;
        }
    }
    
    cout << answer_days;
    return 0;
}