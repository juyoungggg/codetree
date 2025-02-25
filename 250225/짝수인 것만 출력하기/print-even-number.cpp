#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    int evens[n];
    int j = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) {
            evens[j++] = arr[i];
        }
    }

    for (int i = 0; i < j; i++)
        cout << evens[i] << ' ';
    
    cout << endl;

    return 0;
}