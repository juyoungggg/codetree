#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int max, bound = n;
    while (bound != 0) {
        max = 0;
        for (int i = 1; i < bound; i++) {
            if (arr[max] < arr[i])
                max = i;
        }
        bound = max;
        cout << max + 1 << ' ';
    }

    cout << endl;
    return 0;
}