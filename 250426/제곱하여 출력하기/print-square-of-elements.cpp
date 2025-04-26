#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    int sq[n];
    for (int i = 0; i < n; i++) {
        sq[i] = arr[i] * arr[i];
        cout << sq[i] << ' ';
    }
    cout << endl;
    return 0;
}