#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // 청소를 한 마지막 날을 기록하는 변수 (0일 기준)
    int classroom = 0, corridor = 0, restroom = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 12 == 0)
            restroom++;
        else if (i % 3 == 0)
            corridor++;
        else if (i % 2 == 0)
            classroom++;
    }
    cout << classroom << " " << corridor << " " << restroom << endl;

    return 0;
}