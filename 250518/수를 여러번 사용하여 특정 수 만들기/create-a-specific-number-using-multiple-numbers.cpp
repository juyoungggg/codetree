#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int cnt = 0, b_cnt = 0;
    int num = 0;
    while (1) {
        if (c >= a * (cnt - b_cnt) + b * b_cnt)
            num = a * (cnt - b_cnt) + b * b_cnt;
        else
            break;

        if (b_cnt == cnt) {
            cnt++;
            b_cnt = 0;
        }
        else
            b_cnt++;
    }

    cout << num << endl;
    return 0;
}