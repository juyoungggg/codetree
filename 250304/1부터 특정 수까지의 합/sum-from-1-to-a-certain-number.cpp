#include <iostream>
using namespace std;

int AddN(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i;
    return sum / 10;
}

int main() {
    int n;
    cin >> n;

    cout << AddN(n) << endl;
    return 0;
}