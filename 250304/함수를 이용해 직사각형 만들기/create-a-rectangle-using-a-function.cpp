#include <iostream>
using namespace std;

void SquareOnes(int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << 1;
        cout << endl;
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    SquareOnes(n, m);
    return 0;
}