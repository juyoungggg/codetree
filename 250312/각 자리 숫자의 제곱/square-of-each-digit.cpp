#include <iostream>
using namespace std;

int SumPowDigits(int n) {
    if (n < 10)
        return n * n;
    return SumPowDigits(n / 10) + (n % 10) * (n % 10);
}

int main() {
    int n;
    cin >> n;

    cout << SumPowDigits(n) << endl;
    return 0;
}