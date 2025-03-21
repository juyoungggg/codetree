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

void decimal_to_binary(int n) {
    if (n < 2) {
        digits2[cnt2++] = n % 2;
        return;
    }
    decimal_to_binary(n / 2);
    digits2[cnt2++] = n % 2;
}


int main() {
    int n;
    cin >> n;

    number_to_digits(n);
    
    int decimal = 0;
    for (int i = 0; i < cnt; i++)
        decimal = decimal * 2 + digits[i];

    decimal *= 17;
    decimal_to_binary(decimal);
    for (int i = 0; i < cnt2; i++)
        cout << digits2[i];
    
    cout << endl;
    return 0;
}