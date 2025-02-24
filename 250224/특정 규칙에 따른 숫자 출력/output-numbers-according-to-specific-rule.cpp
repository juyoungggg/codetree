#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i <= j) {
                cout << cnt << ' ';
                cnt = (cnt >= 9 ? 1 : cnt + 1);
            }
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}