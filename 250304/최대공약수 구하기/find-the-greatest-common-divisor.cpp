#include <iostream>
using namespace std;

int GetGCD(int n, int m) {
    while (n % m != 0) {
        int tmp = n % m;
        n = m;
        m = tmp;
    }
    return m;
}

int main() {
    int n, m;
    cin >> n >> m;

    cout << GetGCD(n, m) << endl;
    return 0;
}