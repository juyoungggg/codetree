#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        if (i % 3 == 0 || i % 10 == 3 || i % 10 == 6 || i % 10 == 9 || (i >= 30 && 0 <= i / 30 && i / 30 <= 9))
            cout << 0 << " ";
        else
            cout << i << " ";
    
    cout << endl;
    
    // 1. 3으로 나눠서 나머지 0이면 0 출력
    // 2. 10으로 나눠서 나머지 3, 6, 9이면 0 출력
    // 3. 30보다 클 때 30으로 나눠서 몫 0~9면 0 출력
    return 0;
}