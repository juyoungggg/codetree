#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || (j == n - 1 && n % 2 == 0) || (j % 2 == 1 && i <= j))
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}

/*
n=5
1,1 / 1,3 / 2,3 / 3,3

*/





