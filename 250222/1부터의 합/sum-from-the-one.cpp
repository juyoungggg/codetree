#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0, i;
    for (i = 1; i <= 100; i++) {
        sum += i;
        if (sum >= n)
            break;
    }

    cout << i << endl;
    return 0;
}