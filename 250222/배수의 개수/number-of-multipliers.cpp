#include <iostream>
using namespace std;

int main() {
    int n;
    int threes = 0, fives = 0;

    for (int i = 0; i < 10; i++) {
        cin >> n;
        if (n % 3 == 0) threes++;
        if (n % 5 == 0) fives++;
    }

    cout << threes << " " << fives << endl;

    return 0;
}