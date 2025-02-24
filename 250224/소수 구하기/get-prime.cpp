#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i, div;
    for (i = 2; i <= n; i++) {
        div = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0)
                div++;
        }
        if (div == 2)
            cout << i << ' ';

    }
    return 0;
}