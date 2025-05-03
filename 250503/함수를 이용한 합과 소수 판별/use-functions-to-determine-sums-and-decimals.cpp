#include <iostream>
using namespace std;

bool IsPrime(int n) {
    if (n == 1) return 0;
    
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return 0;
    
    return 1;
}

int add_digits(int i) {
    int sum = 0;
    while (i != 0) {
        sum += i % 10;
        i /= 10;
    }
    return sum;
}

int main() {
    int a, b;
    cin >> a >> b;

    int cnt = 0;
    for (int i = a; i <= b; i++) {
        if (IsPrime(i) && add_digits(i) % 2 == 0)
            cnt++;
    }

    cout << cnt << endl;
    return 0;
}