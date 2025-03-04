#include <iostream>
using namespace std;

bool checkFives(int n) {
    int tmp = n, sum = 0;
    while (tmp != 0) {
        sum += tmp % 10;
        tmp /= 10;
    }
    return n % 2 == 0 && sum % 5 == 0;
}

int main() {
    int n;
    cin >> n;

    cout << (checkFives(n) ? "Yes" : "No") << endl;
    return 0;
}