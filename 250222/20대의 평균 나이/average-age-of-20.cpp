#include <iostream>
using namespace std;

int main() {
    int age, sum = 0, cnt = 0;
    double avg;

    while (1) {
        cin >> age;
        if (!(20 <= age && age <= 29))
            break;
        sum += age;
        cnt++;
    }
    avg = (double)sum / cnt;
    cout << fixed;
    cout.precision(2);

    cout << avg << endl;
    
    return 0;
}