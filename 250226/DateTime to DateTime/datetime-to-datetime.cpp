#include <iostream>
using namespace std;

int main() {
    int month = 11, day = 11, hour = 11, min = 11;

    int a, b, c;
    cin >> a >> b >> c;
    
    if (a < 11 || b < 11 || b <= 11 && c < 11) { // 시간이 앞선 경우
        cout << -1 << endl;
        return 0;
    }

    int elapsed_min = 0;
    while (1) {
        if (day == a && hour == b && min == c)
            break;
        
        elapsed_min++;
        min++;

        if (min == 60) {
            hour++;
            min = 0;
        }
        
        if (hour == 24) {
            day++;
            hour = 0;
        }
    }
    cout << elapsed_min << endl;
    
    return 0;
}