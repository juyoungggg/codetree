#include <iostream>
using namespace std;

int main() {
    int arr[4] = {0, };
    int temp;
    char c;

    for (int i = 0; i < 3; i++) {
        cin >> c >> temp;
        if (temp >= 37 && c == 'Y')
            arr[0]++;
        else if (temp >= 37 && c == 'N')
            arr[1]++;
        else if (temp < 37 && c == 'Y')
            arr[2]++;
        else // if (temp < 37 && c == 'N')
            arr[3]++;
    }

    for (int i = 0; i < 4; i++)
        cout << arr[i] << ' ';
    if (arr[0] >= 2)
        cout << 'E';

    cout << endl;
    return 0;
}