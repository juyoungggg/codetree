#include <iostream>
using namespace std;

int digits[10] = {};
int cnt = 0;

void number_to_digits(int n) {
    if (n < 10) {
        digits[cnt++] = n % 10;
        return;
    }
    number_to_digits(n / 10);
    digits[cnt++] = n % 10;
}

int digits2[10] = {};
int cnt2 = 0;

void decimal_to_binary(int n, int b) {
    if (n < b) {
        digits2[cnt2++] = n % b;
        return;
    }
    decimal_to_binary(n / b, b);
    digits2[cnt2++] = n % b;
}

int main() {
    int a, b, n;
    cin >> a >> b;
    cin.get();
    cin >> n;

    number_to_digits(n);

    int decimal = 0;
    for (int i = 0; i < cnt; i++)
        decimal = decimal * a + digits[i];

    decimal_to_binary(decimal, b);

    for (int i = 0; i < cnt2; i++)
        cout << digits2[i];
    cout << endl;

    return 0;
}