#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n * 2 + 1; i++) {
        if (i % 2 == 0)
            for (int j = 0; j < n * 2 + 1; j++)
                cout << "* ";
        else
            for (int j = 0; j < n * 2 + 1; j++)
                if (j % 2 == 0)
                    cout << "* ";
                else
                    cout << "  ";
        cout << endl;
    }

    return 0;
}