#include <iostream>
using namespace std;

int main() {
    int n;

    bool flag = true;
    for (int i = 0; i < 5; i++) {
        cin >> n;
        if (n % 3 != 0)
            flag = false;
    }

    cout << flag << endl;
    return 0;
}