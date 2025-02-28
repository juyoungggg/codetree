#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    char c;
    cin >> c;

    int cnt = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i][0] == c) {
            cnt++;
            sum += arr[i].length();
        }
    }

    cout << fixed;
    cout.precision(2);

    cout << cnt << ' ' << (double)(sum) / cnt << endl;

    return 0;
}