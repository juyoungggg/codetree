#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) 
        cin >> arr[i];
    
    int most, temp;
    for (int i = 0; i < n - 1; i++) {
        most = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[most] < arr[j])
                most = j;
        }
        temp = arr[i];
        arr[i] = arr[most];
        arr[most] = temp;
    }

    cout << arr[0] << ' ' << arr[1] << endl;

    return 0;
}