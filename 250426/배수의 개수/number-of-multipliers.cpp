#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int threes = 0, fives = 0;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (arr[i] % 3 == 0)
            threes++;
        if (arr[i] % 5 == 0)
            fives++;
    }

    cout << threes << ' ' << fives << endl;
    return 0;
}