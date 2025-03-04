#include <iostream>
using namespace std;

bool IsPrime(int n) {
    if (n == 1)
        return 0;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int main() {
    int a, b;
    cin >> a >> b;

    int sum = 0;
    for (int i = a; i <= b; i++)
        sum += (IsPrime(i) ? i : 0);

    cout << sum << endl;
    return 0;
}