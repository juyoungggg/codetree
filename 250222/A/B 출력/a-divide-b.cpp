#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << a / b << ".";

    int tmp = a;
    tmp = tmp % b * 10;
    cout << tmp / b;
    
    for (int i = 1; i < 20; i++) {
        tmp = tmp % b * 10;
        cout << tmp / b;
    }
    // 나눗셈의 순서
    // 14 / 3 = 4 ... 2
    // 4 적고, 2 * 10 / 3 = 6 ... 2
    // .뒤에 2적고, 2 * 10 / 3 = 6 ... 2
    // 2 적고, 2 * 10 / 3 = 6 ... 2
    return 0;
}