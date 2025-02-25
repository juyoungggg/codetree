#include <iostream>
using namespace std;

int main() {
    int arr[2][4];
    int total = 0;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
            total += arr[i][j];
        }

    int sum = 0;
    double avg;
    cout << fixed;
    cout.precision(1);

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++)
            sum += arr[i][j];
        cout << (double)(sum) / 4 << ' '; 
        sum = 0;
    }
    cout << endl;

    for (int j = 0; j < 4; j++) {
        for (int i = 0; i < 2; i++)
            sum += arr[i][j];
        cout << (double)(sum) / 2 << ' ';
        sum = 0;
    }
    cout << endl;

    cout << (double)(total) / 8 << endl;

    return 0;
}