#include <iostream>
using namespace std;

int digits[10] = {};
int cnt = 0;

void Decimal_to_Binary(int n, int b) {
    if (n < b) {
        digits[cnt++] = n % b;
        return;
    }
    Decimal_to_Binary(n / b, b);
    digits[cnt++] = n % b;
}

int main() {
    int n, b;
    cin >> n >> b;

    Decimal_to_Binary(n, b);

    for (int i = 0; i < cnt; i++)
        cout << digits[i];

    cout << endl;
    return 0;
}