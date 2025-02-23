#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            for (int k = i; k > 0; k--) 
                cout << '*';
            cout << ' ';
        }
        cout << endl;
    }

    return 0;
}