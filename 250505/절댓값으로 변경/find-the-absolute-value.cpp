#include <iostream>
using namespace std;

void Modify(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0)
            arr[i] *= (-1);
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) 
        cin >> arr[i];

    Modify(arr, n);
    for (int i = 0; i < n; i++) 
        cout << arr[i] << ' ';
    
    cout << endl;
    return 0;
}