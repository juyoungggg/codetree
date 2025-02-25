#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[1000 + 1] = {0, };
    int num;
    for (int i = 0 ; i < n; i++) {
        cin >> num;
        arr[num]++;
    }

    int max = -1;
    for (int i = 1000; i >= 1; i--)
        if (arr[i] == 1)
            max = i;

    cout << max << endl;

    return 0;
}