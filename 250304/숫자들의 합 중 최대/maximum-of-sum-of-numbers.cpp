#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    int tmp, sum = 0, max = 0;
    for (int i = x; i <= y; i++) {
        tmp = i;
        sum = 0;
        while (tmp != 0) {
            sum += tmp % 10;
            tmp /= 10;
        }
        if (max < sum)
            max = sum;
    }
    
    cout << max << endl;
    return 0;
}