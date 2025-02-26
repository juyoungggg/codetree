#include <iostream>
using namespace std;

int main() {
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;
    
    int days_in_month[12 + 1] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    string yoil[7] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
    
    int ans = 1; // 월요일은 yoil[ans]로 출력하면 됨
    
    int month = m1, day = d1;
    
    if (m1 < m2) {
        ans += (days_in_month[m1] - d1);
        for (int i = m1 + 1; i < m2; i++)
            ans += days_in_month[i];
        ans += d2;
    }
    else if (m1 > m2) {
        ans += (days_in_month[m2] - d2);
        for (int i = m2 + 1; i < m1; i++)
            ans += days_in_month[i];
        ans += d2;
    }
    else if (m1 == m2) {
        ans += (d2 - d1);
    }

    cout << yoil[ans % 7] << endl;

    return 0;
}