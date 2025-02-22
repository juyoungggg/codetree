#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    int sum = 0, cnt = 0;
    double avg = 0;
    for (int i = a; i <= b; i++) {
        if (i % 5 == 0 || i % 7 == 0) {
            cnt++;
            sum += i;
        }
    }
    avg = (double)sum / cnt;
    
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << avg << endl;
}