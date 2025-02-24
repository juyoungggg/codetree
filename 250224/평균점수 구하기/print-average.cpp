#include <iostream>
using namespace std;

int main() {
    double score, sum, avg;

    for (int i = 0; i < 8; i++) {
        cin >> score;
        sum += score;
    }
    avg = sum / 8;
    cout << fixed;
    cout.precision(1);

    cout << avg << endl;
    return 0;
}