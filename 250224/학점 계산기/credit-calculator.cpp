#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    double score, sum = 0, avg;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> score;
        sum += score;
        cnt++;
    }  
    cout << fixed;
    cout.precision(1);
    avg = sum / cnt;
    cout << avg << endl;

    if (avg >= 4.0)
        cout << "Perfect" << endl;
    else if (avg >= 3.0)
        cout << "Good" << endl;
    else
        cout << "Poor" << endl;
    
    return 0;
}